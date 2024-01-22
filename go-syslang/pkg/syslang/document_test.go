package syslang

import (
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
