import Parser from "tree-sitter";
import { parser, query } from "./parser";
import { Node } from "./Node";

class Document {
  source: string;
  internalTree: Parser.Tree;
  root: Node;

  constructor(source: string) {
    this.source = source;
    this.internalTree = parser.parse(source);
    this.root = new Node(this.internalTree.rootNode);
  }

  queryTreeSitter(queryString: string, root: Parser.SyntaxNode = this.internalTree.rootNode) {
    return query(queryString).matches(root);
  }

  get title() {
    try {
      const basicTitleMatch = this.queryTreeSitter("(document_title_basic (text_to_eol) @title)");
      const node = basicTitleMatch[0].captures[0]?.node;
      if (node) return node.text;
    } catch {}

    try {
      const match = this.queryTreeSitter(
        `
      (document_meta_field
        (document_meta_field_key) @key
        (document_meta_field_value) @value
      )
      (#eq? @key "title")
      `
      ).find((m) => m.captures.length === 2);
      if (!match) return null;
      const value = match.captures[1].node;
      return value.text;
    } catch {}
    return null;
  }
}

export { Document };
