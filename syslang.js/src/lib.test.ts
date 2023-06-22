import test from "ava";
import { readFileSync } from "fs";
import { Document } from "./Document";

test("Document title (basic)", (t) => {
  const document = new Document("= title");
  t.is(document.title, "title");
});

test("Document title (meta)", (t) => {
  const document = new Document(
    `@document
  title: title
@end`.trim()
  );
  t.is(document.title, "title");
});

test("Anki", (t) => {});
