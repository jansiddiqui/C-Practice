#include <iostream>
using namespace std;

class Student{
    //data members (attributes)
    public:
    int age;
    string name;
    float marks;
    int standard;
    //member functions (methods)
    public:
    void displayInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Standard: "<<standard<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    //create object of the class Student
    Student student1, student2;
    //assign values to the data members
    student1.name="Jan";
    student1.standard= 12;
    student1.marks=345;
    student1.age=17;
    //call member fuction
    student1.displayInfo();
    student2.name="Lakhan";
    student2.standard=10;
    student2.marks=436;
    student2.age=18;
    student2.displayInfo();
    return 0;
}