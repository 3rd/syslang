package main

import (
	"fmt"

	"github.com/3rd/syslang/go-syslang/pkg/syslang"
	"github.com/k0kubun/pp/v3"
)

func main() {
	sourceCode := `
This is a *test*
Second _line_.
`
	document, err := syslang.NewDocument(sourceCode)
	if err != nil {
		panic(err)
	}
	// pp.Print(document.GetMeta())
	document.GetTasks()
	pp.Println(document.GetTasks())
	// document.PrintTree()
	fmt.Println(document.ToMarkdown())
}
