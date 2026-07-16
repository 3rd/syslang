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

	sitter "github.com/tree-sitter/go-tree-sitter"
)

var (
	queryCache      = make(map[string]*sitter.Query)
	queryCacheMutex sync.RWMutex
)

func GetSyslangLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_syslang())
	return sitter.NewLanguage(ptr)
}

func NewParser() (*sitter.Parser, error) {
	parser := sitter.NewParser()
	syslang := GetSyslangLanguage()
	if err := parser.SetLanguage(syslang); err != nil {
		parser.Close()
		return nil, err
	}
	return parser, nil
}

func NewQuery(query string) (*sitter.Query, error) {
	compiledQuery, err := sitter.NewQuery(GetSyslangLanguage(), query)
	if err != nil {
		return nil, err
	}
	return compiledQuery, nil
}

type QueryCursor struct {
	cursor  *sitter.QueryCursor
	matches sitter.QueryMatches
}

func (c *QueryCursor) NextMatch() (*sitter.QueryMatch, bool) {
	match := c.matches.Next()
	return match, match != nil
}

func (c *QueryCursor) Close() {
	c.cursor.Close()
}

func Query(node *sitter.Node, queryString string) *QueryCursor {
	queryCacheMutex.RLock()
	query := queryCache[queryString]
	queryCacheMutex.RUnlock()

	if query == nil {
		var err error
		query, err = NewQuery(queryString)
		if err != nil {
			panic(fmt.Sprintf("error creating query: %s", err))
		}

		queryCacheMutex.Lock()
		queryCache[queryString] = query
		queryCacheMutex.Unlock()
	}

	cursor := sitter.NewQueryCursor()
	return &QueryCursor{
		cursor:  cursor,
		matches: cursor.Matches(query, node, nil),
	}
}

func QueryOne(node *sitter.Node, queryString string) *sitter.QueryMatch {
	cursor := Query(node, queryString)
	defer cursor.Close()
	match, _ := cursor.NextMatch()
	if match == nil {
		return nil
	}

	result := *match
	result.Captures = append([]sitter.QueryCapture(nil), match.Captures...)
	return &result
}

func PrintTree(node *sitter.Node) {
	treeCursor := node.Walk()
	defer treeCursor.Close()

	rootNode := treeCursor.Node()
	level := 0

	for {
		currentNode := treeCursor.Node()
		currentType := currentNode.Kind()
		currentFieldName := treeCursor.FieldName()

		fieldInfo := ""
		if currentFieldName != "" {
			fieldInfo = fmt.Sprintf("%s: ", currentFieldName)
		}

		if currentNode.IsNamed() {
			fmt.Printf("%s(%s%s)\n", strings.Repeat(" ", level*2), fieldInfo, currentType)
		}

		if treeCursor.GotoFirstChild() {
			level++
			continue
		}

		if treeCursor.GotoNextSibling() {
			continue
		}

		for {
			treeCursor.GotoParent()
			if treeCursor.Node().Equals(*rootNode) {
				return
			}
			if treeCursor.GotoNextSibling() {
				level--
				break
			}
		}
	}
}
