package tree_sitter_daleth_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-daleth"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_daleth.Language())
	if language == nil {
		t.Errorf("Error loading Daleth grammar")
	}
}
