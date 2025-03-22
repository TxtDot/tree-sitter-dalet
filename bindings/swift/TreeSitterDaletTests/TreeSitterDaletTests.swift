import XCTest
import SwiftTreeSitter
import TreeSitterDalet

final class TreeSitterDaletTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dalet())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Dalet grammar")
    }
}
