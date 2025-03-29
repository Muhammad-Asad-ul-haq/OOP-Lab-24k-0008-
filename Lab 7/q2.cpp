#include <iostream>
#include <cmath>
using namespace std;

class Shape {
protected:
    float x, y;
    string color;
    int borderThickness;

public:
    Shape(float x, float y, string color, int borderThickness = 1) 
        : x(x), y(y), color(color), borderThickness(borderThickness) {}

    virtual void draw() = 0;
    virtual void calculateArea() = 0;
    virtual void calculatePerimeter() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float x, float y, string color, float radius, int borderThickness = 1)
        : Shape(x, y, color, borderThickness), radius(radius) {}

    void draw() override {
        cout << "Drawing a circle at (" << x << ", " << y << ") with radius " << radius << "." << endl;
    }

    void calculateArea() override {
        float Area = 3.14159f * radius * radius;
        cout << "Area: " << Area << endl;
    }

    void calculatePerimeter() override {
        float Perimeter = 2 * 3.14159f * radius;
        cout << "Perimeter: " << Perimeter << endl;
    }
};

class Rectangle : public Shape {
private:
    float width, height;

public:
    Rectangle(float x, float y, string color, float width, float height, int borderThickness = 1)
        : Shape(x, y, color, borderThickness), width(width), height(height) {}

    void draw() override {
        cout << "Drawing a rectangle at (" << x << ", " << y << ") with width " << width << " and height " << height << "." << endl;
    }

    void calculateArea() override {
        float Area = width * height;
        cout << "Area: " << Area << endl;
    }

    void calculatePerimeter() override {
        float Perimeter = 2 * (width + height);
        cout << "Perimeter: " << Perimeter << endl;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float x, float y, string color, float base, float height, int borderThickness = 1)
        : Shape(x, y, color, borderThickness), base(base), height(height) {}

    void draw() override {
        cout << "Drawing a triangle at (" << x << ", " << y << ") with base " << base << " and height " << height << "." << endl;
    }

    void calculateArea() override {
        float Area = 0.5f * base * height;
        cout << "Area: " << Area << endl;
    }

    void calculatePerimeter() override {
        float Perimeter = 3 * base;
        cout << "Perimeter: " << Perimeter << endl;
    }
};

class Polygon : public Shape {
private:
    float sideLength;
    int sides;

public:
    Polygon(float x, float y, string color, float sideLength, int sides, int borderThickness = 1)
        : Shape(x, y, color, borderThickness), sideLength(sideLength), sides(sides) {}

    void draw() override {
        cout << "Drawing a polygon at (" << x << ", " << y << ") with " << sides << " sides of length " << sideLength << "." << endl;
    }

    void calculateArea() override {
        float angle = 3.14159f / sides;
        float Area = (sides * sideLength * sideLength) / (4 * tan(angle));
        cout << "Area: " << Area << endl;
    }

    void calculatePerimeter() override {
        float Perimeter = sides * sideLength;
        cout << "Perimeter: " << Perimeter << endl;
    }
};

int main() {
    Circle c1(0, 0, "red", 5.98);
    c1.draw();
    c1.calculateArea();
    c1.calculatePerimeter();

    cout << endl;

    Rectangle r1(3, 0, "blue", 4.4, 6.2);
    r1.draw();
    r1.calculateArea();
    r1.calculatePerimeter();

    cout << endl;

    Triangle t1(6, 3, "green", 2, 2.5);
    t1.draw();
    t1.calculateArea();
    t1.calculatePerimeter();

    cout << endl;

    Polygon p1(6, 4, "yellow", 5, 7);
    p1.draw();
    p1.calculateArea();
    p1.calculatePerimeter();

    return 0;
}
