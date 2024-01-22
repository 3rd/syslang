package treesitter

// #include "parser.h"
// TSLanguage *tree_sitter_syslang();
import "C"
import (
	"fmt"
	"strings"
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetSyslangLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_syslang())
	return sitter.NewLanguage(ptr)
}

func NewParser() *sitter.Parser {
	parser := sitter.NewParser()
	syslang := GetSyslangLanguage()
	parser.SetLanguage(syslang)
	return parser
}

func NewQuery(query string) (*sitter.Query, error) {
	return sitter.NewQuery([]byte(query), GetSyslangLanguage())
}

func Query(node *sitter.Node, queryString string) *sitter.QueryCursor {
	query, err := NewQuery(queryString)
	if err != nil {
		panic(err)
	}
	cursor := sitter.NewQueryCursor()
	cursor.Exec(query, node)
	return cursor
}

func QueryOne(node *sitter.Node, queryString string) *sitter.QueryMatch {
	cursor := Query(node, queryString)
	match, _ := cursor.NextMatch()
	return match
}

func PrintTree(node *sitter.Node) {
	treeCursor := sitter.NewTreeCursor(node)
	defer treeCursor.Close()

	rootNode := treeCursor.CurrentNode()
	level := 0

	for {
		currentNode := treeCursor.CurrentNode()
		currentType := currentNode.Type()
		currentFieldName := treeCursor.CurrentFieldName()

		fieldInfo := ""
		if currentFieldName != "" {
			fieldInfo = fmt.Sprintf("%s: ", currentFieldName)
		}

		if currentNode.IsNamed() {
			fmt.Printf("%s(%s%s)\n", strings.Repeat(" ", level*2), fieldInfo, currentType)
		}

		if treeCursor.GoToFirstChild() {
			level++
			continue
		}

		if treeCursor.GoToNextSibling() {
			continue
		}

		for {
			treeCursor.GoToParent()
			if treeCursor.CurrentNode() == rootNode {
				return
			}
			if treeCursor.GoToNextSibling() {
				level--
				break
			}
		}
	}
}
