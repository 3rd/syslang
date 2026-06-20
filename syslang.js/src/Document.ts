import { isAbsolute } from "node:path";
import Parser from "tree-sitter";
import { parser, query } from "./parser";
import { Node } from "./Node";

type DocumentMeta = Record<string, string>;

interface DocumentMetaValidationIssue {
  key: string;
  value: string;
  message: string;
}

interface FilterDocumentsOptions {
  requireProjectRoot?: boolean;
  excludeArchived?: boolean;
}

const DOCUMENT_META_KEY_ROOT = "root";
const DOCUMENT_META_KEY_ARCHIVED = "archived";

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

  private queryMeta(): DocumentMeta {
    const meta: DocumentMeta = {};
    const matches = this.queryTreeSitter(`
      (document_meta
        (document_meta_field
          (document_meta_field_key) @key
          (document_meta_field_value) @value
        )
      )
    `);

    for (const match of matches) {
      const [keyCapture, valueCapture] = match.captures;
      if (!keyCapture || !valueCapture) continue;
      meta[keyCapture.node.text] = valueCapture.node.text;
    }

    return meta;
  }

  get meta(): DocumentMeta {
    return this.queryMeta();
  }

  get title(): string | null {
    try {
      const basicTitleMatch = this.queryTreeSitter("(document_title_basic (text_to_eol) @title)");
      const node = basicTitleMatch[0].captures[0]?.node;
      if (node) return node.text;
    } catch {}

    return this.meta.title ?? null;
  }

  get projectRoot(): string | null {
    const value = this.meta[DOCUMENT_META_KEY_ROOT]?.trim();
    return value ? value : null;
  }

  get hasProjectRoot(): boolean {
    return this.projectRoot !== null;
  }

  get archived(): boolean {
    const [value, isValid] = parseMetaBoolean(this.meta[DOCUMENT_META_KEY_ARCHIVED]);
    return isValid && value;
  }

  validateMeta(): DocumentMetaValidationIssue[] {
    const issues: DocumentMetaValidationIssue[] = [];
    const projectRoot = this.projectRoot;
    if (projectRoot && !isAbsolute(projectRoot))
      issues.push({
        key: DOCUMENT_META_KEY_ROOT,
        value: projectRoot,
        message: "root must be an absolute path",
      });

    const archivedValue = this.meta[DOCUMENT_META_KEY_ARCHIVED]?.trim();
    if (archivedValue && !parseMetaBoolean(archivedValue)[1])
      issues.push({
        key: DOCUMENT_META_KEY_ARCHIVED,
        value: archivedValue,
        message: "archived must be true or false",
      });

    return issues;
  }
}

const parseMetaBoolean = (value: string | undefined): [boolean, boolean] => {
  switch (value?.trim().toLowerCase()) {
    case "true":
      return [true, true];
    case "false":
      return [false, true];
    default:
      return [false, false];
  }
};

const filterDocuments = (documents: Document[], options: FilterDocumentsOptions = {}): Document[] =>
  documents.filter((document) => {
    if (options.requireProjectRoot && !document.hasProjectRoot) return false;
    if (options.excludeArchived && document.archived) return false;
    return true;
  });

export {
  Document,
  DOCUMENT_META_KEY_ARCHIVED,
  DOCUMENT_META_KEY_ROOT,
  filterDocuments,
};
export type {
  DocumentMeta,
  DocumentMetaValidationIssue,
  FilterDocumentsOptions,
};
