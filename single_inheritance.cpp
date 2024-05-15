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

class car:public Vehicle{
    public:
    car(string model){
        this->model=model;
        
    }
};

int main(){
    car obj("Car");
    obj.setBrand();
}