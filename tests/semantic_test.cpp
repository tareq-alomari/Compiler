#include <gtest/gtest.h>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "semantic/TypeCheckerSemanticAnalyzer.h"
#include "CompilerResultsHandler.h"
#include <memory>

using namespace antlr4;
using namespace antlr_generated;

struct ParseFixture {
    std::unique_ptr<ANTLRInputStream> input;
    std::unique_ptr<ExprLexer> lexer;
    std::unique_ptr<CommonTokenStream> tokens;
    std::unique_ptr<ExprParser> parser;
    tree::ParseTree* tree {nullptr};
};

static ParseFixture makeParseFixture(const std::string &code) {
    ParseFixture f;
    f.input = std::make_unique<ANTLRInputStream>(code);
    f.lexer = std::make_unique<ExprLexer>(f.input.get());
    f.tokens = std::make_unique<CommonTokenStream>(f.lexer.get());
    f.tokens->fill();
    f.parser = std::make_unique<ExprParser>(f.tokens.get());
    f.tree = f.parser->program();
    return f;
}

TEST(SemanticTest, DetectsUseOfUndefinedVariable) {
    auto &results = CompilerResultsHandler::getInstance();
    results.reset();
    // برنامج عربي بسيط: تعريف س ثم محاولة إسناد إلى ي غير المعرفة
    std::string code = "برنامج س؛ متغير س: صحيح؛ { ي=3؛ }.";
    auto fixture = makeParseFixture(code);
    TypeCheckerSemanticAnalyzer analyzer;
    analyzer.visit(fixture.tree);
    EXPECT_TRUE(results.hasErrors());
}

TEST(SemanticTest, RecordsSymbolOnDeclaration) {
    auto &results = CompilerResultsHandler::getInstance();
    results.reset();
    std::string code = "برنامج س؛ متغير س: صحيح؛ { }.";
    auto fixture = makeParseFixture(code);
    TypeCheckerSemanticAnalyzer analyzer;
    analyzer.visit(fixture.tree);
    EXPECT_FALSE(results.hasErrors());
    // We can't directly read symbols; just check JSON contains Arabic name س
    auto jsonStr = results.getFinalReport();
    EXPECT_NE(jsonStr.find("\"name\": \"س\""), std::string::npos);
}
