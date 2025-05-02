#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isPunctMark(char ch) {
    return (ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == ':' || ch == ';' || ch == '-' || ch == '"' || ch == '\'');
}

bool isAlphaNum(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
}

int main() {
    ifstream inputFile("article.txt");
    ofstream outputFile("report.txt");

    if (!inputFile) {
        cout << "Error opening article.txt.\n";
        return 1;
    }

    if (!outputFile) {
        cout << "Error opening report.txt.\n";
        return 1;
    }

    string currentLine;
    int charCount = 0, wordCount = 0, lineCount = 0, punctuationCount = 0;

    while (getline(inputFile, currentLine)) {
        lineCount++;

        bool isInWord = false;
        for (char ch : currentLine) {
            charCount++;

            if (isAlphaNum(ch)) {
                if (!isInWord) {
                    wordCount++;
                    isInWord = true;
                }
            } else {
                if (isPunctMark(ch)) {
                    punctuationCount++;
                }
                isInWord = false;
            }
        }
    }

    outputFile << "Total characters: " << charCount << "\n";
    outputFile << "Total words: " << wordCount << "\n";
    outputFile << "Total lines: " << lineCount << "\n";
    outputFile << "Total punctuation marks: " << punctuationCount << "\n";

    inputFile.close();
    outputFile.close();

    cout << "Analysis complete. Results saved to report.txt.\n";

    return 0;
}
