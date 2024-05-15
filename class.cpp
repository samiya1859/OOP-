#include <iostream>
#include <string>
using namespace std;

class Student { 
public: 
    string name;
    int roll;
}; 

int main() {

    Student student1;
    student1.name = "Samia";
    student1.roll = 101;

    Student student2;
    student2.name = "Sultana";
    student2.roll = 102;


    cout << "Student 1: Name = " << student1.name << ", Roll = " << student1.roll << endl;
    cout << "Student 2: Name = " << student2.name << ", Roll = " << student2.roll << endl;

    return 0;
}
