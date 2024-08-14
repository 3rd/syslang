package syslang

import (
	"fmt"
	"strings"
	"testing"

	"github.com/stretchr/testify/assert"
	"github.com/stretchr/testify/suite"
)

type DocumentTestSuite struct {
	suite.Suite
}

func TestDocumentTestSuite(t *testing.T) {
	suite.Run(t, new(DocumentTestSuite))
}

func (s *DocumentTestSuite) TestNewDocument() {
	source := ""
	_, err := NewDocument(source)
	assert.NoError(s.T(), err)
}

func (s *DocumentTestSuite) TestNoTitle() {
	source := ``
	doc, err := NewDocument(source)
	assert.NoError(s.T(), err)

	title := doc.GetTitle()
	assert.Equal(s.T(), "", title)
}

func (s *DocumentTestSuite) TestNoMeta() {
	source := ``
	doc, err := NewDocument(source)
	assert.NoError(s.T(), err)

	meta := doc.GetMeta()
	assert.Equal(s.T(), "", meta["title"])
}

func (s *DocumentTestSuite) TestDefaultMeta() {
	source := `
@meta
  title: Document
  custom: custom value
@end`
	doc, err := NewDocument(source)
	assert.NoError(s.T(), err)

	meta := doc.GetMeta()

	assert.Equal(s.T(), "document", doc.GetType())
	assert.Equal(s.T(), "Document", doc.GetTitle())
	assert.Equal(s.T(), "Document", meta["title"])
	assert.Equal(s.T(), "custom value", meta["custom"])
}

func (s *DocumentTestSuite) TestPersonMeta() {
	source := `
@meta
  type: person
  name: Alice
@end`
	doc, err := NewDocument(source)
	assert.NoError(s.T(), err)

	meta := doc.GetMeta()

	assert.Equal(s.T(), doc.GetType(), "person")
	assert.Equal(s.T(), doc.GetTitle(), "Alice")
	assert.Equal(s.T(), meta["name"], "Alice")
}

func (s *DocumentTestSuite) TestToMarkdown() {
	tests := []struct {
		name     string
		input    string
		expected string
	}{
		{
			name:     "Document Title",
			input:    "= Document Title\n",
			expected: "# Document Title\n\n",
		},
		{
			name: "Outlines",
			input: `* Outline 1
** Outline 2
*** Outline 3
**** Outline 4
***** Outline 5
****** Outline 6
`,
			expected: `# Outline 1

## Outline 2

### Outline 3

#### Outline 4

##### Outline 5

###### Outline 6

`,
		},
		{
			name: "Tasks",
			input: `[ ] Default task
[-] Active task
[x] Completed task
[_] Cancelled task
`,
			expected: `- [ ] Default task
- [-] Active task
- [x] Completed task
- [_] Cancelled task
`,
		},
		{
			name: "Nested Tasks",
			input: `[ ] Parent task
  [-] Child task 1
    [x] Grandchild task
  [_] Child task 2
`,
			expected: `- [ ] Parent task
  - [-] Child task 1
    - [x] Grandchild task
  - [_] Child task 2
`,
		},
		{
			name: "List Items",
			input: `- List item 1
- List item 2
  - Nested item
- List item 3
`,
			expected: `- List item 1
- List item 2
  - Nested item
- List item 3
`,
		},
		{
			name: "Code Block",
			input: `@code python
def hello_world():
    print("Hello, World!")
@end
`,
			expected: "```python\ndef hello_world():\n    print(\"Hello, World!\")\n```\n\n",
		},
		{
			name:     "Inline Formatting",
			input:    "This is *bold*, /italic/, and _underlined_ text with `inline code`.",
			expected: "This is **bold**, *italic*, and __underlined__ text with `inline code`.\n",
		},
		{
			name:     "Horizontal Rules",
			input:    "---\n===\n",
			expected: "---\n***\n",
		},
		{
			name:     "Image",
			input:    "![Alt text](https://example.com/image.jpg)",
			expected: "![Alt text](https://example.com/image.jpg)",
		},
		{
			name:     "Internal Link",
			input:    "[[Internal Link]]",
			expected: "[Internal Link](Internal Link)",
		},
		{
			name: "Mixed Content",
			input: `
* Section 1
  ** Subsection 1.1
    [ ] Task 1
      [-] Subtask 1
      [x] Subtask 2
  ** Subsection 1.2
    - List item 1
    - List item 2

@code go
func main() {
    fmt.Println("Hello, World!")
}
@end

This is a paragraph with *bold*, and /italic/ text.

---
`,
			expected: `# Section 1

## Subsection 1.1

- [ ] Task 1
  - [-] Subtask 1
  - [x] Subtask 2

## Subsection 1.2

- List item 1
- List item 2
` + "```go\nfunc main() {\n    fmt.Println(\"Hello, World!\")\n}\n```\n\n" +
				`This is a paragraph with **bold**, and *italic* text.

---
`,
		},
	}

	for _, tt := range tests {
		s.Run(tt.name, func() {
			doc, err := NewDocument(tt.input)
			s.Require().NoError(err)

			result := doc.ToMarkdown()
			s.Assert().Equal(strings.TrimSpace(tt.expected), strings.TrimSpace(result), "Conversion mismatch for test case: %s", tt.name)
		})
	}
}

func (s *DocumentTestSuite) TestToMarkdownDebug() {
	input := `This is a paragraph with *bold*, /italic/, and _underlined_ text.`

	doc, err := NewDocument(input)
	s.Require().NoError(err)

	result := doc.ToMarkdown()
	fmt.Println("\n----\nConversion result:")
	fmt.Println(result)
}
