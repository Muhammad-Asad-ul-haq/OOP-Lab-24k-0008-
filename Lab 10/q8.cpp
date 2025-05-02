#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream article("article.txt");

    if (!article) {
        cout << "Error opening file.\n";
        return 1;
    }

    
    article.seekg(0, ios::end);
    long fileSize = article.tellg();
    long mid = fileSize / 2;

    
    article.seekg(mid, ios::beg);

    string line;
    int count = 0;

    
    while (count < 10 && getline(article, line)) {
        cout << line << endl;
        count++;
    }

    article.close();
    return 0;
}
