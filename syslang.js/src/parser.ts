import Parser from "tree-sitter";
import syslang from "tree-sitter-syslang";

const parser = new Parser();
parser.setLanguage(syslang);

const query = (queryString: string) => new Parser.Query(syslang, queryString);

export { parser, query };
