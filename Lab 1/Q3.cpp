#include <iostream>
#include <string>
using namespace std;

int main() {
    int num1, num2, result;
    char opr;

    
    cout << "Enter number 1: ";
    cin >> num1;

    
    cout << "Enter number 2: ";
    cin >> num2;

    
    cout << "Enter operator (+, -, *, /): ";
    cin >> opr;

    
    switch (opr) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            result = num1 / num2;
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }

    
    cout << "The result is: " << result << endl;

    return 0;
}

