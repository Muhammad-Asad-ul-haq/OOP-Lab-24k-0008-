#include <iostream>
#include<string>
using namespace std;

class ValidateString{
	private:
		string word;
	public:
		ValidateString(string x){
			word=x;
		}
	bool check() const {
        for (char ch : word) {
            if ((ch < 'A' || ch > 'Z') && (ch < 'a' || ch > 'z')) {
                return false;
            }
        }
        return true;
    }
    void show() const {
        if (check()) {
            cout << "\"" << word << "\" is all good!\n";
        } else {
            cout << "\"" << word << "\" is not correct\n";
        }
    }

};


int main() {
    string userInput;
    cout << "Enter a word to check: ";
    cin >> userInput;

    ValidateString a(userInput);
    a.show();

    return 0;
}
