#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

int main() {
    std::ifstream inputFile("array practice quetions.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Error opening input file." << std::endl;
        return 1;
    }

    std::vector<std::string> codeSnippets;
    std::string line, codeSnippet;

    // Read the entire file and separate code snippets
    while (std::getline(inputFile, line)) {
        // Check if the line starts with "Question Number"
        if (line.find("Question Number") == 0) {
            // If codeSnippet is not empty, save the previous code
            if (!codeSnippet.empty()) {
                codeSnippets.push_back(codeSnippet);
                codeSnippet.clear();
            }
            // Skip the line that starts with "Question Number"
        } else {
            codeSnippet += line + "\n";
        }
    }

    // Don't forget to add the last code snippet
    if (!codeSnippet.empty()) {
        codeSnippets.push_back(codeSnippet);
    }

    inputFile.close();

    // Write each code snippet to a separate file
    for (size_t i = 0; i < codeSnippets.size(); ++i) {
        std::ofstream outputFile("quetion_" + std::to_string(i + 1) + ".cpp");
        if (outputFile.is_open()) {
            outputFile << "#include <iostream>\n\nint main() {\n";
            outputFile << codeSnippets[i];
            outputFile << "    return 0;\n}\n";  // End main function and return statement
            outputFile.close();
        } else {
            std::cerr << "Error creating output file code_" << (i + 1) << ".cpp" << std::endl;
            return 1;
        }
    }

    std::cout << "Code snippets have been successfully separated and saved." << std::endl;

    return 0;
}
