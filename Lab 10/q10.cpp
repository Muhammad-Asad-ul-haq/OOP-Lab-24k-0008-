#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream backup("backup_log.txt", ios::app);

    if (!backup) {
        cout << "Error opening file.\n";
        return 1;
    }

    string msg;

    while (true) {
        cout << "Enter log message or 'exit' to quit: ";
        getline(cin, msg);
        
        if (msg == "exit"){
            break;
        }

        backup << message << endl;
        cout << "Current file size: " << backup.tellp() << " bytes\n";
    }

    backup.close();
    return 0;
}
