#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual double area() const = 0; 
};


class Circle : public Shape {
private:
    double radius;

public:
    
    Circle(double r) {
        radius = r;
    }

    
    double area() const {
        return 3.14 * radius * radius;
    }
};

int main() {
    
    Circle circle(5);

    cout << "Area of circle: " << circle.area() << std::endl;

    return 0;
}
