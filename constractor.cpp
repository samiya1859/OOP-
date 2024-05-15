#include <iostream>
#include <string>
using namespace std;

class Student { 
public: 
    string name;
    int roll;

    // Constructor
    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
}; 

int main() {

    Student student1("Samia", 101);
    Student student2("Sultana", 102);

    cout << "Student 1: Name = " << student1.name << ", Roll = " << student1.roll << endl;
    cout << "Student 2: Name = " << student2.name << ", Roll = " << student2.roll << endl;

    return 0;
}
