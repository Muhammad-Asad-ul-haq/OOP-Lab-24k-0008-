#include <iostream>
using namespace std;


void performOperation(int* num1, int* num2, char opr, int* result);

int main() {
    int num1, num2, result;
    char opr;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> opr;

    
    performOperation(&num1, &num2, opr, &result);

    
    cout << "The result is: " << result << endl;

    return 0;
}

void performOperation(int* num1, int* num2, char opr, int* result) {
    
    switch (opr) {
        case '+':
            *result = *num1 + *num2;
            break;
        case '-':
            *result = *num1 - *num2;
            break;
        case '*':
            *result = *num1 * *num2;
            break;
        case '/':
            if (*num2 == 0) {
                cout << "Error: cant divide by 0" << endl;
                return;
            }
            *result = *num1 / *num2;
            break;
        default:
            cout << "Cant do that" << endl;
            return;
    }
}
