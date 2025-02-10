#include <iostream>
#include <string>

using namespace std;

class Circle {
    double radius;

public:
    double pi=3.14159;

    void setRadius(double r) {
        radius = r;
    }

    void getRadius() {
        cout << "The radius is: " << radius << endl;
    }

    void getArea(){
        float area=(pi*radius*radius);
        cout << "The area is: " << area << endl;
    }

    void getDiameter(){
        double diameter=(radius*2);
        cout << "The diameter is: " << diameter << endl;
    }
    
    void getCircumference(){
        float circumference=(2 * pi * radius);
        cout << "The circumference is: " << circumference << endl;
    }
    
};

int main() {
    double rad;
   
    cout<<"Enter the Radius of the Circle: ";
    cin>>rad;
    
    
    Circle c1;
    
    c1.setRadius(rad);
    c1.getRadius();
    
    c1.getArea();
    c1.getDiameter();
    c1.getCircumference();
    

    return 0;
}