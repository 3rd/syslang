package treesitter

// #cgo CFLAGS: -std=c11 -fPIC
// #include "../../../tree-sitter-syslang/src/parser.c"
// #include "../../../tree-sitter-syslang/src/scanner.c"
// const TSLanguage *tree_sitter_syslang();
import "C"
import (
	"fmt"
	"strings"
	"sync"
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

var (
	queryCache      = make(map[string]*sitter.Query)
	queryCacheMutex sync.RWMutex
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
	queryCacheMutex.RLock()
	query := queryCache[queryString]
	queryCacheMutex.RUnlock()

	if query == nil {
		var err error
		query, err = sitter.NewQuery([]byte(queryString), GetSyslangLanguage())
		if err != nil {
			panic(fmt.Sprintf("error creating query: %s", err))
		}

		queryCacheMutex.Lock()
		queryCache[queryString] = query
		queryCacheMutex.Unlock()
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
