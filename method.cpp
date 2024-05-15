#include <iostream>
using namespace std;

class Calculator{
    public:
    int val1,val2;

    Calculator(int val1,int val2){
        this->val1 = val1;
        this->val2 = val2;

    }
    

    // inside the function
    int add(int val1,int val2){
        cout<< val1+val2;
    }

    int temp(int v);
};

// outside the class
int Calculator::temp(int v){
    return v;
}

int main(){
    Calculator obj(3,4);
    cout<<endl<<obj.temp(5);
}