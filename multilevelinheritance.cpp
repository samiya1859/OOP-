#include<iostream>
using namespace std;

class Vehicle{
public:
    string model;
    int price;

    void setBrand(){
        cout<<"Brand : "<<"Toyota"<<endl;
    }
};

class Car:public Vehicle{
public:
    Car(string model) : Vehicle() { 
        this->model=model;    
    }
};

class micro_car:public Car{
public:
    micro_car(string model) : Car(model) {
        
    } 
};

int main(){
    Car obj("Car");
    obj.setBrand();

    micro_car obj2("Cycle");
    obj2.setBrand(); 

    return 0;
}
