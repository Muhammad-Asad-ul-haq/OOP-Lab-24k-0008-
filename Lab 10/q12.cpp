#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("sample.txt");

    if (!file) {
        cout << "File not found\n";
        return 1;
    }

    int offset;
    cout << "Enter the byte offset: ";
    cin >> offset;

    file.seekg(0, ios::end);
    int fileSize = file.tellg();

    if (offset > fileSize) {
        cout << "Offset exceeds file size.\n";
        return 1;
    }

    file.seekg(offset);
    cout << "Pointer position before seeking: " << file.tellg() << endl;

    char buffer[101];
    file.read(buffer, 100);
    buffer[file.gcount()] = '\0';

    cout << "Pointer position after seeking: " << file.tellg() << endl;
    cout << "Next 100 characters: " << buffer << endl;

    file.close();
    return 0;
}
