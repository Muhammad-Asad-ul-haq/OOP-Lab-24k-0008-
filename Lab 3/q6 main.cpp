#include "q6 Employee.h"
#include <iostream>
using namespace std;

int main() {
    
    Employee e1, e2, e3;

    
    cout << "Enter details for Employee 1:\n";
    e1.getData();
    e1.Salary_after_tax();

    
    cout << "\nEnter details for Employee 2:\n";
    e2.getData();
    e2.Salary_after_tax();

    
    cout << "\nEnter details for Employee 3:\n";
    e3.getData();
    e3.Salary_after_tax();

    
    float t;
    cout << "\nEnter new tax percentage for Employee 1: ";
    cin >> newTax;
    e1.update_tax_percentage(t);

    
    cout << "\nEnter new tax percentage for Employee 2: ";
    cin >> t;
    e2.update_tax_percentage(t);

   
    cout << "\nEnter new tax percentage for Employee 3: ";
    cin >> t;
    e3.update_tax_percentage(t);

    return 0;
}