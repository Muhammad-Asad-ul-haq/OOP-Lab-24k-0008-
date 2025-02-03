
#include <iostream>
using namespace std;

int* array(int size) {
    int* arr = new int[size];
    return arr;
}

int main() {
    int x;
    cout << "Enter the number of elements: ";
    cin >> x;

   
    if (x <= 0) {
        cout << "Please enter a positive number " << endl;
        return 1;
    }

    int* TheArray = array(x);

    for (int i = 0; i < x; i++) {
       TheArray[i] = i * 2;  
    }

    for (int i = 0; i < x; i++) {
        cout << "Element " << i+1
		 << ": " << TheArray[i] << endl;
    }

    delete[] TheArray;

    return 0;
}
