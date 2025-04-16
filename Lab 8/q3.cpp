#include <iostream>
using namespace std;

class ComplexNumber {
public:
    double real, imag;

    ComplexNumber(double real = 0, double imag = 0) {
        this->real = real;
        this->imag = imag;
    }

    /
    ComplexNumber operator+(const ComplexNumber& other) {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

    
    ComplexNumber operator-(const ComplexNumber& other) {
        return ComplexNumber(real - other.real, imag - other.imag);
    }

    
    ComplexNumber operator*(const ComplexNumber& other) {
        return ComplexNumber(
            real * other.real - imag * other.imag,
            real * other.imag + imag * other.real
        );
    }

    
    bool operator==(const ComplexNumber& other) {
        return (real == other.real && imag == other.imag);
    }

    void display() {
        cout << real << (imag >= 0 ? " + " : " - ") << abs(imag) << "i" << endl;
    }
};

int main() {
    ComplexNumber a(3, 4), b(1, 2), f(3, 4);

    ComplexNumber c = a + b;
    ComplexNumber d = a - b;
    ComplexNumber e = a * b;

    cout << "a + b = "; c.display();
    cout << "a - b = "; d.display();
    cout << "a * b = "; e.display();
    cout << "a == f? " << (a == f ? "True" : "False") << endl;
    cout << "a == b? " << (a == b ? "True" : "False") << endl;

    return 0;
} 