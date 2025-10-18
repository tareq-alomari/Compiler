#include <gtest/gtest.h>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include <string>

using namespace antlr4;
using namespace antlr_generated;

TEST(LexerTest, LexesArabicKeywordsAndIdentifiers) {
    std::string code = "برنامج س؛{ متغير س: صحيح؛ }.";
    ANTLRInputStream input(code);
    ExprLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    tokens.fill();

    bool sawProgram = false;
    bool sawId = false;
    for (const auto &t : tokens.getTokens()) {
        if (t->getType() == ExprLexer::PROGRAM) sawProgram = true;
        if (t->getType() == ExprLexer::ID) sawId = true;
    }
    EXPECT_TRUE(sawProgram);
    EXPECT_TRUE(sawId);
}
