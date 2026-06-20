import assert from "node:assert/strict";
import test from "node:test";
import {
  Document,
  DOCUMENT_META_KEY_ARCHIVED,
  DOCUMENT_META_KEY_ROOT,
  filterDocuments,
} from "./Document";

test("Document title (basic)", () => {
  const document = new Document("= title");
  assert.equal(document.title, "title");
});

test("Document title (meta)", () => {
  const document = new Document(
    `@meta
  title: title
@end`.trim()
  );
  assert.equal(document.title, "title");
});

test("Document reserved meta helpers", () => {
  const document = new Document(
    `@meta
  title: Code Project
  root: /tmp/syslang
  archived: TrUe
@end`.trim()
  );

  assert.deepEqual(document.meta, {
    title: "Code Project",
    [DOCUMENT_META_KEY_ROOT]: "/tmp/syslang",
    [DOCUMENT_META_KEY_ARCHIVED]: "TrUe",
  });
  assert.equal(document.projectRoot, "/tmp/syslang");
  assert.equal(document.hasProjectRoot, true);
  assert.equal(document.archived, true);
  assert.deepEqual(document.validateMeta(), []);
});

test("Document reserved meta validation", () => {
  const document = new Document(
    `@meta
  root: projects/syslang
  archived: maybe
@end`.trim()
  );

  assert.deepEqual(document.validateMeta(), [
    {
      key: DOCUMENT_META_KEY_ROOT,
      value: "projects/syslang",
      message: "root must be an absolute path",
    },
    {
      key: DOCUMENT_META_KEY_ARCHIVED,
      value: "maybe",
      message: "archived must be true or false",
    },
  ]);
  assert.equal(document.archived, false);
});

test("filterDocuments applies explicit project/archive filters", () => {
  const documents = [
    new Document(
      `@meta
  title: Life Project
@end`.trim()
    ),
    new Document(
      `@meta
  title: Active Code Project
  root: /tmp/active-project
@end`.trim()
    ),
    new Document(
      `@meta
  title: Archived Code Project
  root: /tmp/archived-project
  archived: true
@end`.trim()
    ),
  ];

  assert.deepEqual(
    filterDocuments(documents, { requireProjectRoot: true }).map((document) => document.title),
    ["Active Code Project", "Archived Code Project"]
  );
  assert.deepEqual(
    filterDocuments(documents, { requireProjectRoot: true, excludeArchived: true }).map(
      (document) => document.title
    ),
    ["Active Code Project"]
  );
});
