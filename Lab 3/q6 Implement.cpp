#include "q6 Employee.h"
#include <iostream>
using namespace std;


void Employee::getData() {
    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter monthly salary: $";
    cin >> Salary;
    cout << "Enter tax percentage: ";
    cin >> tax;
}


void Employee::Salary_after_tax() {
    float Salary_after = Salary - (Salary * (tax / 100));
    cout << "Salary after tax is: " << Salary_after << endl;
}


void Employee::update_tax_percentage(float t) {
    tax = t;
    cout << "Tax updated to " << tax << "%" << endl;

    float UpdatedSalary = Salary - (Salary * (tax / 100));
    cout << "Salary after tax update is: " << UpdatedSalary << endl;
}