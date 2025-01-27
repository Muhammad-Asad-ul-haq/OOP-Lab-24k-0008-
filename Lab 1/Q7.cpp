#include <iostream>
using namespace std;

int main() {
    int units;
    float total = 0;
    
    cout << "Enter number of units: ";
    cin >> units;
    
    if (units <= 50) {
        total = 0.50 * units;
    }
    else if (units > 50 && units <= 150) {
        total = (50 * 0.50) + (units - 50) * 0.75;
    }
    else if (units > 150 && units <= 250) {
        total = (50 * 0.50) + (100 * 0.75) + (units - 150) * 1.20;
    }
    else if (units > 250) {
        total = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + (units - 250) * 1.50;
    }

    total = total + (total * 0.20);  

    cout << "Total Electricity bill: " << total << endl;

    return 0;
}
