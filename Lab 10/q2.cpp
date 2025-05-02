#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream diary("diary.txt");
    string line;

    if (diary.is_open()) {
        cout << "Write your diary entry or just type 'exit' to finish:" << endl;
        getline(cin, line);
        while (line != "exit") {
            diary << line << endl;
            getline(cin, line);
        }
        diary.close();
        cout << "Diary saved\n";
    } else {
        cout << "Not able to open the file.\n";
    }

    return 0;
}
