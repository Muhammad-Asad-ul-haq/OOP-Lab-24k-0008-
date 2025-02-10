#include <iostream>
#include <string>

using namespace std;

class Employee{
float Salary;
string name;
float tax;

public:


void getData() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter monthly salary: $";
        cin >> Salary;
        cout << "Enter tax percentage : ";
        cin >> tax;
    }
    
    

void Salary_after_tax(){
    float Salary_after=Salary-(Salary*(tax/100));
    cout<<"Salary after tax is: "<<Salary_after<<endl;
    
    
}


void update_tax_percentage(float t){
    tax=t;
    
    cout<<"Tax updated to "<< tax<<"%"<<endl;
    
    float UpdatedSalary=Salary-(Salary*(tax/100));
    cout<<"Salary after tax update is: "<<UpdatedSalary<<endl;
}
};

int main() {

Employee e1;

e1.getData();
e1.Salary_after_tax();

float updateTax;

cout<<"Enter New tax Percentage: ";
cin>>updateTax;


e1.update_tax_percentage(updateTax);




    return 0;
}
