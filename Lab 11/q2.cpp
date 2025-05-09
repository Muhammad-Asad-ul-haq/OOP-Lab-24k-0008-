#include <iostream>
using namespace std;

int main() {
    int num, den;
    
    cout << "Enter numerator: ";
    cin >> num;
    cout << "Enter denominator: ";
    cin >> den;

    try {
        if (den == 0) throw "Division by zero is not possible";
        cout << "Result: " << num / den << endl;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}
