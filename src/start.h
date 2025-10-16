#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"
#include "CompilerResultsHandler.h"
#include "CustomErrorListener.h"
#include "semantic/TypeCheckerSemanticAnalyzer.h"
using namespace antlr4;
using namespace antlr_generated;
using namespace std;

//=====================================================================
//داله لكتابه الكود الذي يهمنا بعيداً عن الكود الطويل في 
// ملف ال main
// حيث لا نحتاج الى فهم كامل الملف
//=====================================================================
void start(string sourceCode){

    // --- إعداد المترجم ---
    ANTLRInputStream input(sourceCode);
    auto& resultsHandler = CompilerResultsHandler::getInstance();

    //===============================================================
    // --- المرحلة 1: التحليل اللغوي ---
    //===============================================================
    CustomErrorListener lexerErrorListener("Lexer Error");
    ExprLexer lexer(&input);
    lexer.removeErrorListeners();
    lexer.addErrorListener(&lexerErrorListener);
    
    CommonTokenStream tokens(&lexer);
    tokens.fill(); // تحميل كل الـ Tokens

    



    //===============================================================
    // --- المرحلة 2: التحليل النحوي ---
    //===============================================================
    tokens.seek(0); // إعادة المؤشر إلى بداية الـ tokens
    CustomErrorListener parserErrorListener("Parser Error");
    ExprParser parser(&tokens);
    parser.removeErrorListeners();
    parser.addErrorListener(&parserErrorListener);
    // ملاحظة: القاعدة العليا في العربية هي 'program'
    tree::ParseTree* tree = parser.program();

    
     // 1. إضافه التوكن الى مجمع المخرجات  لاستلامها في c# او عرضها في console
    for (const auto& token : tokens.getTokens()) {
        if (token->getChannel() == 0) { // أضف فقط الـ tokens التي ليست في قناة 'skip'
            string tokenType = string(parser.getVocabulary().getSymbolicName(token->getType()));
            string tokenLexeme = token->getText();
            resultsHandler.addToken(
                token->getLine(),
                token->getCharPositionInLine(),
                tokenType,
                tokenLexeme ,
                token->getStartIndex(),
                token->getStopIndex() 
            );
            
        }
    }
   

    
    //===============================================================
      // 2. إضافة شجرة التحليل
    //===============================================================
    if (tree != nullptr) {
        resultsHandler.setParseTree(tree->toStringTree(&parser));
    }

    
    // --- المرحلة 3: التحليل الدلالي ---
    if (!resultsHandler.hasErrors()) {
        TypeCheckerSemanticAnalyzer semanticAnalyzer;
        semanticAnalyzer.visit(tree);
    }

}