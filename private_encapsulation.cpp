#include<iostream>
using namespace std;

class A{
    int val;

    public:
    float b;
    A(float b){
        this->b=b;
    }
    
    void setter(int v){
        val=v;
    }
    void getter(){
        cout<<val<<endl;
    }
};

int main(){
    A obj(5);
    obj.setter(8);
    obj.getter();
    cout<<obj.b<<endl;
}

// 8
// 5