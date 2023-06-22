/* eslint-disable no-await-in-loop */
import { readFileSync } from "fs";
import { Document } from "../Document";
import { getDecksFromDocument } from "../anki";
import { resolve } from "path";
import axios from "axios";

const files = ["/home/rabbit/brain/wiki/anki/anki-software-engineering", "/home/rabbit/brain/wiki/anki/anki-sudheerj"];
const dest = "/home/rabbit/lab/anki/";

const importPackage = async (path: string) => {
  const response = await axios.post("http://127.0.0.1:8765", {
    action: "importPackage",
    version: 6,
    params: {
      path: path,
    },
  });
  if (response.data.error) {
    console.error("[AnkiConnect] Error:", response.data.error);
  } else {
    console.log(`[AnkiConnect] Imported ${path}`);
  }
};

const main = async () => {
  for (const file of files) {
    const source = readFileSync(file, "utf8");
    const document = new Document(source);
    const decks = await getDecksFromDocument(document);
    for (const deck of decks) {
      if (deck.cards.length === 0) continue;
      try {
        const path = resolve(dest, deck.title.replace(/[^a-z0-9]/gi, "-") + ".apkg");
        console.log(`[Deck] ${deck.title} (${deck.cards.length} cards) -> ${path}`);
        await deck.writeToFile(path);
        console.log(`[Anki] Importing...`);
        await importPackage(path);
      } catch (e) {
        console.error(e);
      }
    }
  }
};
main();
