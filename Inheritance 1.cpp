#include <iostream>
using namespace std;
class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h = 0, double w = 0) : height(h), width(w) {}
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double area() const override {
        return height * width;
    }
    
    double perimeter() const override {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    
    double area() const override {
        return 0.5 * height * width;
    }
    
    double perimeter() const override {
        double hypotenuse = sqrt(height * height + width * width);
        return height + width + hypotenuse;
    }
};

int main() {
    Rectangle rect(4, 6);
    Triangle tri(3, 4);
    cout << "Rectangle - Area: " << rect.area() << ", Perimeter: " << rect.perimeter() << endl;
    cout << "Triangle - Area: " << tri.area() << ", Perimeter: " << tri.perimeter() << endl;

    return 0;
}

