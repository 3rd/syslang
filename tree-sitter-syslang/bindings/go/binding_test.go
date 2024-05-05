package tree_sitter_syslang_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-syslang"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_syslang.Language())
	if language == nil {
		t.Errorf("Error loading Syslang grammar")
	}
}
