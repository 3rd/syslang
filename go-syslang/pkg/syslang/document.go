// Package syslang provides a library for working with Syslang documents.
package syslang

import (
	"context"
	"encoding/json"
	"fmt"

	"github.com/3rd/syslang/go-syslang/internal/treesitter"
	"github.com/k0kubun/pp/v3"
	sitter "github.com/smacker/go-tree-sitter"
)

type DocumentMeta map[string]string

type Document struct {
	source string
	parser *sitter.Parser
	tree   *sitter.Tree
}

func NewDocument(source string) (*Document, error) {
	parser := treesitter.NewParser()

	tree, err := parser.ParseCtx(context.Background(), nil, []byte(source))
	if err != nil {
		return nil, err
	}
	if tree.RootNode().HasError() {
		return nil, fmt.Errorf("failed to parse source")
	}

	return &Document{
		source,
		parser,
		tree,
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
	return QueryTasks(*d)
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
	result := ""

	treeCursor := sitter.NewTreeCursor(d.tree.RootNode())
	defer treeCursor.Close()

	// var previousSiblingNode *sitter.Node
	rootCursorNode := treeCursor.CurrentNode()

	for {
		currentNode := treeCursor.CurrentNode()
		currentType := currentNode.Type()
		currentParent := currentNode.Parent()
		currentEndPoint := currentNode.EndPoint()

		isLastSibling := false
		if currentParent != nil {
			parentEndPoint := currentParent.EndPoint()
			isLastSibling = currentEndPoint.Row == parentEndPoint.Row && currentEndPoint.Column == parentEndPoint.Column
		}

		pp.Printf("- node: %s last: %s\n", currentType, isLastSibling)

		if currentNode.ChildCount() == 0 {
			text := currentNode.Content([]byte(d.source))
			pp.Printf("  text: %s\n", text)

			switch currentType {
			case "text":
				result += text
			case "bold_content":
				result += "**" + text + "**"
			default:
				result += " "
			}
		}

		if currentParent != nil {
			currentParentType := currentParent.Type()
			pp.Printf("  parent: %s\n", currentParentType)

			if currentParentType == "text_line" && isLastSibling {
				pp.Println("  -> add newline")
				result += "\n"
			}
		}

		if treeCursor.GoToFirstChild() {
			// previousSiblingNode = nil
			continue
		}

		if treeCursor.GoToNextSibling() {
			// previousSiblingNode = currentNode
			continue
		}

		for {
			treeCursor.GoToParent()

			if treeCursor.GoToNextSibling() {
				// previousSiblingNode = treeCursor.CurrentNode()
				break
			}

			if treeCursor.CurrentNode() == rootCursorNode {
				return result
			}
		}
	}
}
