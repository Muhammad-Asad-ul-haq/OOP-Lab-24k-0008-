#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    fstream draft("draft.txt", ios::in | ios::out);

    if (!draft) {
        cout << "Error opening the file.\n";
        return 1;
    }

    string line;
    long position;
    bool found = false;

    while (getline(draft, line)) {
        position = draft.tellg();
        size_t foundPos = line.find("teh");

        if (foundPos != string::npos) {
            draft.seekp(position - line.length() + foundPos);
            draft << "the";
            found = true;
            break;
        }
    }

    draft.close();

    if (found) {
        cout << "'teh' has been corrected to 'the'.\n";
    } else {
        cout << "'teh' not found in the file.\n";
    }

    return 0;
}
