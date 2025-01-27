#include <iostream>
using namespace std;

int main() {
    int first, last;
    int count = 0;

    cout << "Enter the range that you want:" << endl;
    cout << "First: ";
    cin >> first;
    cout << "Last: ";
    cin >> last;
    
  
    if (first > last) {
        cout << "Error: No Range" << endl;
        return 0;  
    }

   
    for (int i = first; i <= last; i++) {
        if (i % 2 == 0) {  
            cout << i << " ";
            count++;
            if (count == 5) {  
                cout << endl;
                count = 0;
            }
        }
    }

    return 0;
}
