
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
q3.cpp
Displaying q3.cpp.
Lab 02 (In-Lab Tasks)
Sameer Faisal
•
Jan 30 (Edited Jan 31)
Due Jan 31, 10:30 AM
Submit Q2 & Q3
Class comments
Your work
Turned in

q2.cpp
Text

q3.cpp
Text
Work cannot be turned in after the due date
Private comments
