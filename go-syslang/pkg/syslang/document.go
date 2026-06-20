// Package syslang provides a library for working with Syslang documents.
package syslang

import (
	"context"
	"encoding/json"
	"fmt"
	"path/filepath"
	"strings"

	"github.com/3rd/syslang/go-syslang/internal/treesitter"
	sitter "github.com/smacker/go-tree-sitter"
)

type DocumentMeta map[string]string

const (
	DocumentMetaKeyRoot     = "root"
	DocumentMetaKeyArchived = "archived"
)

type DocumentMetaValidationIssue struct {
	Key     string
	Value   string
	Message string
}

type DocumentFilterOptions struct {
	RequireProjectRoot bool
	ExcludeArchived    bool
}

type Document struct {
	source string
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
		*tree,
	}, nil
}

func (d *Document) GetMeta() DocumentMeta {
	return d.queryMeta()
}

func (d *Document) queryMeta() DocumentMeta {
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

func (d *Document) HasProjectRoot() bool {
	return d.GetProjectRoot() != ""
}

func (d *Document) GetProjectRoot() string {
	return strings.TrimSpace(d.GetMeta()[DocumentMetaKeyRoot])
}

func (d *Document) IsArchived() bool {
	archived, ok := parseMetaBool(d.GetMeta()[DocumentMetaKeyArchived])
	return ok && archived
}

func (d *Document) ValidateMeta() []DocumentMetaValidationIssue {
	meta := d.GetMeta()
	issues := []DocumentMetaValidationIssue{}

	projectRoot := strings.TrimSpace(meta[DocumentMetaKeyRoot])
	if projectRoot != "" && !filepath.IsAbs(projectRoot) {
		issues = append(issues, DocumentMetaValidationIssue{
			Key:     DocumentMetaKeyRoot,
			Value:   projectRoot,
			Message: "root must be an absolute path",
		})
	}

	archivedValue := strings.TrimSpace(meta[DocumentMetaKeyArchived])
	if archivedValue != "" {
		if _, ok := parseMetaBool(archivedValue); !ok {
			issues = append(issues, DocumentMetaValidationIssue{
				Key:     DocumentMetaKeyArchived,
				Value:   archivedValue,
				Message: "archived must be true or false",
			})
		}
	}

	return issues
}

func FilterDocuments(documents []*Document, options DocumentFilterOptions) []*Document {
	filtered := []*Document{}

	for _, document := range documents {
		if options.RequireProjectRoot && !document.HasProjectRoot() {
			continue
		}
		if options.ExcludeArchived && document.IsArchived() {
			continue
		}
		filtered = append(filtered, document)
	}

	return filtered
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

func parseMetaBool(value string) (bool, bool) {
	switch strings.ToLower(strings.TrimSpace(value)) {
	case "true":
		return true, true
	case "false":
		return false, true
	default:
		return false, false
	}
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
			builder.WriteString("\n")
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
		builder.WriteString(strings.Repeat("  ", listDepth))
		builder.WriteString(prefix)
		builder.WriteString(strings.TrimRight(renderInlineMarkdown(node.NamedChild(1), source), "\n"))
		builder.WriteString("\n")
		for i := 2; i < int(node.NamedChildCount()); i++ {
			convertNodeToMarkdown(builder, node.NamedChild(i), source, depth+1, listDepth+1)
		}
	case "list_item":
		builder.WriteString(strings.Repeat("  ", listDepth))
		builder.WriteString("- ")
		inlineEnd := listItemInlineEnd(node)
		builder.WriteString(strings.TrimRight(renderInlineChildRangeMarkdown(node, source, 1, inlineEnd), "\n"))
		builder.WriteString("\n")
		for i := inlineEnd; i < int(node.NamedChildCount()); i++ {
			convertNodeToMarkdown(builder, node.NamedChild(i), source, depth+1, listDepth+1)
		}
	case "code_block":
		builder.WriteString("```")
		if node.NamedChildCount() > 1 && node.NamedChild(0).Type() == "code_block_start" && node.NamedChild(0).NamedChildCount() > 0 {
			builder.WriteString(node.NamedChild(0).NamedChild(0).Content([]byte(source)))
		}
		builder.WriteString("\n")
		if node.NamedChildCount() > 1 {
			builder.WriteString(node.NamedChild(1).Content([]byte(source)))
		}
		builder.WriteString("\n```\n\n")
	case "text_line", "text_to_eol":
		builder.WriteString(strings.TrimRight(renderInlineMarkdown(node, source), "\n"))
		builder.WriteString("\n")
		if depth == 0 && listDepth == 0 {
			builder.WriteString("\n")
		}
	case "horizontal_rule":
		builder.WriteString("---\n")
	case "double_horizontal_rule":
		builder.WriteString("***\n")
	case "internal_link":
		target := node.NamedChild(1).Content([]byte(source))
		builder.WriteString("[")
		builder.WriteString(target)
		builder.WriteString("](")
		builder.WriteString(target)
		builder.WriteString(")")
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

func listItemInlineEnd(node *sitter.Node) int {
	for i := 1; i < int(node.NamedChildCount()); i++ {
		child := node.NamedChild(i)
		if child.Type() == "text_line" {
			if i == 1 {
				return 2
			}
			return i
		}
		if !isInlineListItemChild(child) {
			return i
		}
	}

	return int(node.NamedChildCount())
}

func isInlineListItemChild(node *sitter.Node) bool {
	switch node.Type() {
	case "list_item_label", "list_item_label_marker", "text", "number", "string", "ticket", "compound_identifier", "date", "daterange", "time", "timerange", "datetime", "datetimerange", "tag_positive", "tag_negative", "tag_hash", "tag_context", "tag_danger", "tag_identifier", "external_link", "comment", "bold", "italic", "underline", "inline_code", "internal_link":
		return true
	default:
		return false
	}
}

func renderInlineChildRangeMarkdown(node *sitter.Node, source string, start int, end int) string {
	if start >= end {
		return ""
	}

	builder := strings.Builder{}
	cursor := int(node.NamedChild(start).StartByte())

	for i := start; i < end; i++ {
		child := node.NamedChild(i)
		childStart := int(child.StartByte())
		childEnd := int(child.EndByte())
		if childStart > cursor {
			builder.WriteString(source[cursor:childStart])
		}
		builder.WriteString(renderInlineMarkdown(child, source))
		cursor = childEnd
	}

	return builder.String()
}

func renderInlineMarkdown(node *sitter.Node, source string) string {
	switch node.Type() {
	case "bold":
		return "**" + renderInlineMarkdown(node.NamedChild(1), source) + "**"
	case "italic":
		return "*" + renderInlineMarkdown(node.NamedChild(1), source) + "*"
	case "underline":
		return "__" + renderInlineMarkdown(node.NamedChild(1), source) + "__"
	case "inline_code":
		return "`" + renderInlineMarkdown(node.NamedChild(1), source) + "`"
	case "internal_link":
		target := node.NamedChild(1).Content([]byte(source))
		return "[" + target + "](" + target + ")"
	case "text", "number", "string", "ticket", "compound_identifier", "date", "daterange", "time", "timerange", "datetime", "datetimerange", "tag_positive", "tag_negative", "tag_hash", "tag_context", "tag_danger", "tag_identifier", "external_link", "comment":
		return node.Content([]byte(source))
	}

	if node.ChildCount() == 0 {
		return node.Content([]byte(source))
	}

	builder := strings.Builder{}
	start := int(node.StartByte())
	end := int(node.EndByte())
	cursor := start

	for i := 0; i < int(node.ChildCount()); i++ {
		child := node.Child(i)
		childStart := int(child.StartByte())
		childEnd := int(child.EndByte())
		if childStart > cursor {
			builder.WriteString(source[cursor:childStart])
		}
		if child.IsNamed() {
			builder.WriteString(renderInlineMarkdown(child, source))
		} else {
			builder.WriteString(child.Content([]byte(source)))
		}
		cursor = childEnd
	}

	if cursor < end {
		builder.WriteString(source[cursor:end])
	}

	return builder.String()
}
