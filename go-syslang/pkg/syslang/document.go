// Package syslang provides a library for working with Syslang documents.
package syslang

import (
	"context"
	"encoding/json"
	"fmt"
	"strings"

	"github.com/3rd/syslang/go-syslang/internal/treesitter"
	sitter "github.com/smacker/go-tree-sitter"
)

type DocumentMeta map[string]string

type Document struct {
	source string
	parser sitter.Parser
	tree   sitter.Tree
}

func NewDocument(source string) (*Document, error) {
	var parser = treesitter.NewParser()
	tree, err := parser.ParseCtx(context.Background(), nil, []byte(source))
	if err != nil {
		return nil, err
	}
	if tree.RootNode().HasError() {
		return nil, fmt.Errorf("failed to parse source")
	}

	return &Document{
		source,
		*parser,
		*tree,
	}, nil
}

func (d *Document) GetMeta() DocumentMeta {
	// @meta
	//   title: Document
	//   custom: custom value
	// @end
	meta := DocumentMeta{}
	cursor := treesitter.Query(d.tree.RootNode(), `
    (document_meta
      (document_meta_field
        (document_meta_field_key) @key
        (document_meta_field_value) @value
      )
    )`)
	for {
		match, _ := cursor.NextMatch()
		if match == nil {
			break
		}
		key := match.Captures[0].Node.Content([]byte(d.source))
		value := match.Captures[1].Node.Content([]byte(d.source))
		meta[key] = value
	}

	return meta
}

func (d *Document) GetTasks() []Task {
	return QueryTasks(d)
}

func (d *Document) GetType() string {
	meta := d.GetMeta()

	if t, ok := meta["type"]; ok {
		return t
	}

	return "document"
}

func (d *Document) GetTitle() string {
	t := d.GetType()
	meta := d.GetMeta()

	if t == "person" {
		if name, ok := meta["name"]; ok {
			return name
		}
	}

	if title, ok := meta["title"]; ok {
		return title
	}
	return ""
}

func (d *Document) PrintTree() {
	treesitter.PrintTree(d.tree.RootNode())
}

type JSONNode struct {
	Type     string      `json:"type"`
	Parent   *JSONNode   `json:"-"`
	Children []*JSONNode `json:"children,omitempty"`
	Text     string      `json:"text,omitempty"`
}

func (d *Document) ToJSON() string {
	treeCursor := sitter.NewTreeCursor(d.tree.RootNode())
	defer treeCursor.Close()

	rootCursorNode := treeCursor.CurrentNode()
	var parentJSONNode *JSONNode

	for {
		currentNode := treeCursor.CurrentNode()
		currentType := currentNode.Type()

		node := &JSONNode{
			Type:     currentType,
			Children: []*JSONNode{},
			Parent:   parentJSONNode,
		}

		if currentNode.ChildCount() == 0 {
			node.Text = currentNode.Content([]byte(d.source))
		}

		if parentJSONNode != nil {
			parentJSONNode.Children = append(parentJSONNode.Children, node)
		}

		if treeCursor.GoToFirstChild() {
			parentJSONNode = node
			continue
		}

		if treeCursor.GoToNextSibling() {
			continue
		}

		for {
			treeCursor.GoToParent()

			if treeCursor.GoToNextSibling() {
				parentJSONNode = parentJSONNode.Parent
				break
			}

			if treeCursor.CurrentNode() == rootCursorNode {
				var root = parentJSONNode
				for root.Parent != nil {
					root = root.Parent
				}
				jsonStr, err := json.MarshalIndent(root, "", "  ")
				if err != nil {
					panic(err)
				}
				return string(jsonStr)
			}
		}
	}
}

func (d *Document) ToMarkdown() string {
	builder := strings.Builder{}
	root := d.tree.RootNode()
	convertNodeToMarkdown(&builder, root, d.source, 0, 0)
	return builder.String()
}

func convertNodeToMarkdown(builder *strings.Builder, node *sitter.Node, source string, depth int, listDepth int) {
	fmt.Printf("Node Type: %s, Content: %s\n", node.Type(), node.Content([]byte(source)))

	switch node.Type() {
	case "document":
		for i := 0; i < int(node.ChildCount()); i++ {
			convertNodeToMarkdown(builder, node.Child(i), source, depth, listDepth)
		}
	case "document_title_basic":
		builder.WriteString("# ")
		builder.WriteString(node.NamedChild(1).Content([]byte(source)))
		builder.WriteString("\n\n")
	case "outline_1", "outline_2", "outline_3", "outline_4", "outline_5", "outline_6":
		if depth > 0 && !strings.HasSuffix(builder.String(), "\n\n") {
			builder.WriteString("\n\n")
		}
		headingLevel := int(node.Type()[8] - '0')
		builder.WriteString(strings.Repeat("#", headingLevel) + " ")
		builder.WriteString(node.NamedChild(1).Content([]byte(source)))
		builder.WriteString("\n\n")
		for i := 2; i < int(node.NamedChildCount()); i++ {
			convertNodeToMarkdown(builder, node.NamedChild(i), source, depth+1, 0)
		}
	case "task_default", "task_active", "task_done", "task_cancelled":
		prefix := map[string]string{
			"task_default":   "- [ ] ",
			"task_active":    "- [-] ",
			"task_done":      "- [x] ",
			"task_cancelled": "- [_] ",
		}[node.Type()]
		builder.WriteString(strings.Repeat("  ", listDepth) + prefix)
		for i := 1; i < int(node.ChildCount()); i++ {
			convertNodeToMarkdown(builder, node.Child(i), source, depth+1, listDepth+1)
		}
		builder.WriteString("\n")
	case "text_line":
		builder.WriteString(strings.Repeat("  ", listDepth))
		for i := 0; i < int(node.ChildCount()); i++ {
			// TODO: figure out why unnamed children are missing
			fmt.Printf("Child %d: %s\n", i, node.Child(i).Type())
			convertNodeToMarkdown(builder, node.Child(i), source, depth, listDepth)
		}
		builder.WriteString("\n")
	case "list_item":
		builder.WriteString(strings.Repeat("  ", listDepth) + "- ")
		for i := 1; i < int(node.ChildCount()); i++ {
			convertNodeToMarkdown(builder, node.Child(i), source, depth+1, listDepth+1)
		}
		builder.WriteString("\n")
	case "bold":
		builder.WriteString("**")
		builder.WriteString(node.NamedChild(1).Content([]byte(source)))
		builder.WriteString("**")
	case "italic":
		builder.WriteString("*")
		builder.WriteString(node.NamedChild(1).Content([]byte(source)))
		builder.WriteString("*")
	case "underline":
		builder.WriteString("__")
		builder.WriteString(node.NamedChild(1).Content([]byte(source)))
		builder.WriteString("__")
	case "inline_code":
		builder.WriteString("`")
		builder.WriteString(node.NamedChild(1).Content([]byte(source)))
		builder.WriteString("`")
	case "code_block":
		builder.WriteString("```")
		builder.WriteString(node.NamedChild(0).NamedChild(0).Content([]byte(source)))
		builder.WriteString("\n")
		builder.WriteString(node.NamedChild(1).Content([]byte(source)))
		builder.WriteString("\n```\n")
	case "text":
		builder.WriteString(node.Content([]byte(source)))
	default:
		if node.ChildCount() == 0 {
			builder.WriteString(node.Content([]byte(source)))
		} else {
			for i := 0; i < int(node.ChildCount()); i++ {
				node := node.Child(i)
				if node.IsNamed() {
					convertNodeToMarkdown(builder, node, source, depth, listDepth)
				} else {
					builder.WriteString(node.Content([]byte(source)))
				}
			}
		}
	}
}
