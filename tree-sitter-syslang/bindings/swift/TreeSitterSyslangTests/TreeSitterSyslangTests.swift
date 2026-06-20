import XCTest
import SwiftTreeSitter
import TreeSitterSyslang

final class TreeSitterSyslangTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_syslang())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Syslang grammar")
    }
}
