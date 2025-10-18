#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "antlr4-runtime.h"
#include "start.h"
#include "CompilerResultsHandler.h"
using namespace std;

int main(int argc, char* argv[]) {
    
    string sourceCode;
    
    // ---يقرأ الكود من الملف اذا تم تمرير مسار الملف
    if (argc > 1) {
        string inputFilename = argv[1];
        ifstream inputFileStream(inputFilename);
        if (!inputFileStream) {
            cerr << "Fatal Error: Could not open input file: " << inputFilename << endl;
            return 1;
        }
        stringstream buffer;
        buffer << inputFileStream.rdbuf();
        sourceCode = buffer.str();
    } else {
        // في حال التعامل مع c# يقرأ من stdin
        stringstream buffer;
        buffer << cin.rdbuf();
        sourceCode = buffer.str();
    }
    auto& resultsHandler = CompilerResultsHandler::getInstance();
    resultsHandler.reset();
    start(sourceCode);

    
    // --- تجميع التقرير النهائي ---
    resultsHandler.setCompilationStatus();
    cout << resultsHandler.getFinalReport();
    return 0;
}