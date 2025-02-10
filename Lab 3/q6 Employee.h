#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
private:
    float Salary;
    string name;
    float tax;

public:
    void getData(); 
    void Salary_after_tax(); 
    void update_tax_percentage(float t); 
};

#endif