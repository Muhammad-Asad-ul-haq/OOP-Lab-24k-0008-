#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream signup("signup.txt", ios::app);  
    string name, email;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your email: ";
    getline(cin, email);

    signup << "Name: " << name << ", Email: " << email << "\n";

    signup.close();
    cout << "Registration saved.\n";

    return 0;
}
