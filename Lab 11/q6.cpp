#include <iostream>
#include <stdexcept>
using namespace std;

class InvalidAgeException : public runtime_error {
public:
    InvalidAgeException() : runtime_error("Age must be between 1 and 119") {}
};

class InvalidSalaryException : public runtime_error {
public:
    InvalidSalaryException() : runtime_error("Salary must be positive") {}
};

class InvalidHeightException : public runtime_error {
public:
    InvalidHeightException() : runtime_error("Height must be positive") {}
};

void validateProfile(int age, double salary, double height) {
    if (age <= 0 || age >= 120) throw InvalidAgeException();
    if (salary <= 0) throw InvalidSalaryException();
    if (height <= 0) throw InvalidHeightException();
}

int main() {
    try {
        int age;
        double salary, height;
        
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter height: ";
        cin >> height;
        
        validateProfile(age, salary, height);
        cout << "Profile validated successfully!" << endl;
    }
    catch (const InvalidAgeException& e) {
        cerr << "InvalidAgeException caught: " << e.what() << endl;
    }
    catch (const InvalidSalaryException& e) {
        cerr << "InvalidSalaryException caught: " << e.what() << endl;
    }
    catch (const InvalidHeightException& e) {
        cerr << "InvalidHeightException caught: " << e.what() << endl;
    }

    return 0;
}
