#include <gtest/gtest.h>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include <memory>
#include <string>

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

TEST(ParserTest, ParsesArabicProgram) {
    // تعريف قبل كتلة التعليمات، وتعليمة إسناد داخل الكتلة
    std::string code = "برنامج س؛ متغير س: صحيح؛ { س = 7؛ }.";
    auto fixture = makeParseFixture(code);
    ASSERT_NE(fixture.tree, nullptr);
}
