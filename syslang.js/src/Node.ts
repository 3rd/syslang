import Parser from "tree-sitter";

class Node {
  internalNode: Parser.SyntaxNode;
  type: string;
  text: string;
  parent: Node | null;
  children: Node[];

  constructor(internalNode: Parser.SyntaxNode) {
    this.internalNode = internalNode;
    this.type = internalNode.type;
    this.text = internalNode.text;
    this.parent = null;
    this.children = [];

    for (let i = 0; i < internalNode.childCount; i++) {
      const child = internalNode.child(i);
      if (!child) continue;
      const node = new Node(child);
      node.parent = this;
      this.children.push(node);
    }
  }

  // implement css-like query selector
  // e.g. "document_meta_field document_meta_field_key"
  query(queryString: string, deep = true): Node[] {
    const parts = queryString.split(" ");
    const [first, ...rest] = parts;
    const matches = this.children.filter((child) => child.type === first);
    if (rest.length === 0) {
      const childMatches = deep ? this.children.map((child) => child.query(queryString)) : [];
      return matches.concat(...childMatches);
    } else if (matches.length === 0) {
      return [];
    } else if (deep) {
      const restString = rest.join(" ");
      return matches.flatMap((match: Node) => match.query(restString));
    }
    return matches;
  }

  prettyPrint(indent: number = 0) {
    const prefix = "  ".repeat(indent);
    let output = `${prefix}`;
    // eslint-disable-next-line sonarjs/no-nested-template-literals
    output += `${prefix}(${this.type}${this.children.length > 0 ? `` : ` text:"${this.text}")`}\n`;
    if (this.children.length === 0) return output;
    for (const child of this.children) {
      output += child.prettyPrint(indent + 1);
    }
    output += `${prefix})\n`;
    return output;
  }
}

export { Node };
