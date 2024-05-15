#include <iostream>
using namespace std;

// Function Overloading
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};



int main() {
    Calculator math;

    // Function Overloading
    cout << "Sum of 5 and 10 (int): " << math.add(5, 10) << endl;
    cout << "Sum of 5.5 and 10.5 (double): " << math.add(5.5, 10.5) << endl;

    return 0;
}
