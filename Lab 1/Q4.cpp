#include <iostream>
using namespace std;

int main() {
    int numbers,even = 0, odd = 0;

   
    cout << "Enter the number of elements: ";
    cin >> numbers;

    int arr[numbers];

    
    cout << "Enter " << numbers << " integers: " << endl;
    for (int i = 0; i < numbers; i++) {
        cout << "Enter " << "integer " <<  i+1 << ": "   ;
        cin >> arr[i];
    }

   
    for (int i = 0; i < numbers; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    
    cout << "Even numbers count: " << even << endl;
    cout << "Odd numbers count: " << odd << endl;

    return 0;
}

