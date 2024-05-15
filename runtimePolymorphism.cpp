#include <iostream>
using namespace std;

// In C++, the virtual keyword is used to declare a member function in a base class as "virtual". When a member function is declared as virtual in a base class, it indicates to the compiler that this function may be overridden in derived classes.
class Shape {
public:
    virtual double area(double length, double width) const = 0; 
};


class Rectangle : public Shape {
public:
    double area(double length, double width) const override {
        return length * width;
    }
};


class Triangle : public Shape {
public:
    double area(double base, double height) const override {
        return 0.5 * base * height;
    }
};

int main() {
    Rectangle rectangle;
    Triangle triangle;

    const Shape* shape1 = &rectangle; 
    const Shape* shape2 = &triangle; 

    double result1 = shape1->area(5, 0); 
    double result2 = shape2->area(4, 6);  

    cout << "Area of rectangle: " << result1 << endl;
    cout << "Area of triangle: " << result2 << endl;

    return 0;
}
