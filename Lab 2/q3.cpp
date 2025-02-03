Skip to main content
Google Classroom
Classroom
OOP (BAI-2A) - Lab
Spring 2025
  
Home
Calendar
Enrolled
To-do
B
BAI-2A (CCE )
A
AI-2A EW Theory S25
A
AI-2A EW Lab S25
E
Expository Writing Spring 2025
M
MVC
BAI-2A (Spring 2025)
D
DLD (BAI-2A)
(BAI-2A)
D
Digital Logic Design - Sp25
BAI-2A
B
BAI (ICP )
2A
O
OOP Spring 25
BAI-2A
O
OOP (BAI-2A) - Lab
Spring 2025
Archived classes
Settings
Lab 02 (In-Lab Tasks)
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