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

func (s *DocumentTestSuite) TestBasicTitle() {
	source := `= Document`
	doc, err := NewDocument(source)
	assert.NoError(s.T(), err)

	assert.Equal(s.T(), "Document", doc.GetTitle())
}

func (s *DocumentTestSuite) TestMeta() {
	source := `
@document
  title: Document
  custom: custom value
@end`
	doc, err := NewDocument(source)
	assert.NoError(s.T(), err)

	meta := doc.GetMeta()
	assert.Equal(s.T(), "Document", doc.GetTitle())
	assert.Equal(s.T(), "Document", meta[metaTitleKey])
	assert.Equal(s.T(), "custom value", meta["custom"])
}
