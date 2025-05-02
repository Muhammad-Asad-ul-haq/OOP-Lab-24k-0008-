#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name, message;

    cout << "Enter the recipient name: ";
    getline(cin, name); // to get full name like Asad Ul haq

    cout << "Enter short message: ";
    getline(cin, message);

    ofstream outFile("greeting.txt");

    if (outFile.is_open()) {
        outFile << "Dear " << name << ",\n";
        outFile << message << "\n";
        outFile << "Best Regards!\n";
        outFile.close();
        cout << "Greeting saved\n";
    } else {
        cout << "Not able to open the file.\n";
    }

    return 0;
}
