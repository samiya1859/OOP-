#include<iostream>
using namespace std;

class Vehicle {
public:
    string model;

    void setBrand() {
        cout << "Brand : " << "Toyota" << endl;
    }
};

class car {
public:
    int price;
    car(int price) {
        this->price = price;
    }
};

class Cycle : public Vehicle, public car {
public:
    Cycle(string model, int price) : Vehicle(), car(price) {
        this->model = model;
    }
};

int main() {
    Cycle obj("Cycle", 1000);  
    obj.setBrand(); 
}
