#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ifstream file("story.txt");  
    string line;

    if (file.is_open()) {
        
        while (getline(file, line)) {  
            istringstream stream(line);  
            string word;

           
            while (stream >> word) {
                cout << word << endl;
            }
        }
        file.close();  
    } else {
        cout << "Not able to open the file.\n";
    }

    return 0;
}
