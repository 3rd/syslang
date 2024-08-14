package syslang

import (
	"context"

	sitter "github.com/smacker/go-tree-sitter"
	"github.com/smacker/go-tree-sitter/markdown"
)

func MarkdownToSyslang(source string) string {
	result := ""

	tree, err := markdown.ParseCtx(context.Background(), nil, []byte(source))
	if err != nil {
		panic(err)
	}

	treeCursor := sitter.NewTreeCursor(tree.BlockTree().RootNode())
	defer treeCursor.Close()

	// TODO

	return result
}
