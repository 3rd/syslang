import AnkiExport from "@steve2955/anki-apkg-export";
import { Document } from "./Document";
import { Node } from "./Node";
import { writeFileSync } from "fs";
import { remark } from "remark";
import remarkHtml from "remark-html";

const renderMarkdown = async (text: string) => {
  const result = await remark().use(remarkHtml).process(text);
  return result.toString();
};

type Card = { front: string; back: string };

class Deck {
  title: string;
  cards: Card[];

  constructor(title: string, cards: Card[] = []) {
    this.title = title;
    this.cards = cards;
  }

  writeToFile(path: string) {
    return new Promise<void>((resolve, reject) => {
      const apkg = new AnkiExport(this.title);
      for (const card of this.cards) {
        apkg.addCard(card.front, card.back);
      }
      apkg
        .save(path)
        .then((zip: any) => {
          writeFileSync(path, zip, "binary");
          resolve();
        })
        .catch(reject);
    });
  }
}

const getDecksFromDocument = async (document: Document) => {
  const mainTitle = document.title ?? "Untitled";

  const mainDeck: Deck = new Deck(mainTitle);
  const decks: Deck[] = [mainDeck];

  const trimCardBack = (text: string) => {
    const lines = text.split("\n");
    if (lines[0].trim() === "") lines.shift();
    let minIndent = Infinity;
    for (const line of lines) {
      if (line.trim() === "") continue;
      const indent = line.match(/^\s*/)?.[0].length ?? 0;
      minIndent = Math.min(minIndent, indent);
    }
    return lines.map((line) => line.slice(minIndent)).join("\n");
  };

  const format = async (text: string) => {
    let out = text;
    out = out.replaceAll("@code ", "```");
    out = out.replaceAll("@end", "```");
    out = await renderMarkdown(out);
    return out;
  };

  const headingSelectors = ["heading_1", "heading_2", "heading_3", "heading_4", "heading_5", "heading_6"];
  const stack: [Deck, Node][] = [[mainDeck, document.root]];
  while (stack.length > 0) {
    const [deck, node] = stack.pop()!;
    // heading
    if (headingSelectors.includes(node.type)) {
      // heading with subheadings
      const hasSubheadings = headingSelectors.some((selector) => node.query(selector).length > 0);
      if (hasSubheadings) {
        const headingTitle = node.query("text_to_eol", false)[0].text;
        if (!headingTitle) throw new Error(`Cannot resolve heading title for node: ${node.prettyPrint()}`);
        const subdeck = new Deck(`${deck.title}::${headingTitle}`);
        for (const child of node.children) {
          stack.push([subdeck, child]);
        }
        decks.push(subdeck);
      } else {
        const titleNode = node.query("text_to_eol", false)[0];
        if (!titleNode) throw new Error(`Cannot resolve heading title for node: ${node.prettyPrint()}`);
        let front = titleNode.text;
        let back = trimCardBack(node.text.slice(titleNode.internalNode.endIndex - node.internalNode.startIndex));

        const parts = back.split("\n%\n");
        if (parts.length === 2) {
          front = `${front}\n${parts[0]}`;
          back = parts[1];
        }

        // eslint-disable-next-line no-await-in-loop
        deck.cards.push({ front: await format(front), back: await format(back) });
        // console.log(`[Card] ${front} -> ${back}`);
      }
    } else {
      for (const child of node.children) {
        stack.push([deck, child]);
      }
    }
  }
  return decks;
};

export { getDecksFromDocument };
