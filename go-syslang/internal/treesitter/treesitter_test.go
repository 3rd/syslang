package treesitter

import "testing"

func TestSyslangLanguageUsesABI15(t *testing.T) {
	language := GetSyslangLanguage()
	if got := language.AbiVersion(); got != 15 {
		t.Fatalf("language ABI = %d, want 15", got)
	}

	parser, err := NewParser()
	if err != nil {
		t.Fatalf("set language: %v", err)
	}
	defer parser.Close()

	tree := parser.Parse([]byte(""), nil)
	if tree == nil {
		t.Fatal("parse returned nil tree")
	}
	tree.Close()
}
