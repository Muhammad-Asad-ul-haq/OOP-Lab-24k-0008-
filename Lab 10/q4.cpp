#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream logFile("system_log.txt", ios::app);  
    
    if (logFile.is_open()) {
        string userTime;
        
        cout << "Enter the time (HH:MM): ";
        getline(cin, userTime);

        logFile << "System started at: " << userTime << "\n";

        logFile.close();
        cout << "Log entry added.\n";
    } else {
        cout << "Not able to open log file.\n";
    }

    return 0;
}
