#include <iostream>

using namespace std;

int main() {
    int* array = new int[5]; 
    int size = 0;
    int space = 5;
    int n;

    cout << "Enter Positive Numbers. Enter -1 to stop:\n";

    
    cout << "Enter a number: ";
    cin >> n;

    while (n != -1) {  
       if (n < 0) {
            cout << "Error: Please enter a positive number.\n";
       }else{
        if (size == space) {
            space *= 2;  
            int* newArray = new int[space];  
            for (int j = 0; j < size; ++j) {
                newArray[j] = array[j];  
            }
            delete[] array;  
            array = newArray;  
        }

        
        array[size++] = n;  
       }
      
        cout << "Enter a number: ";
        cin >> n;
    }

  
    cout << "Array contents: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

   
    delete[] array;

    return 0;
}
