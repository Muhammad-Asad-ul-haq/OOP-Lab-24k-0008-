#include <iostream>
using namespace std;


int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result = result*i;
    }
    return result;
}

int main() {
    int num;
    int result = 1;

    cout << "Enter the Number: ";
    cin >> num;

    if (num == 0) {
        cout << "Factorial of 0 is 1 " << endl;
    } 
    if (num < 0) {
        cout << "Error" << endl;
    }
    if (num > 0) {
        
        result = factorial(num);
        cout << num << " Factorial is " << result << endl;
    }
    
    return 0;
}
