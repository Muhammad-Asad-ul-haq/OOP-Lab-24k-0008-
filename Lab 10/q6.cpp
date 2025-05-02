#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("secret.txt");  
    char character;
    int uppercaseCount = 0;

    if (file.is_open()) {
        while (file.get(character)) {  
            if (character >= 'A' && character <= 'Z') {
                uppercaseCount++;
            }
        }
        file.close();  
        cout << "Number of uppercase letters are: " << uppercaseCount << endl;
    } else {
        cout << "Not able to open the file.\n";
    }

    return 0;
}
