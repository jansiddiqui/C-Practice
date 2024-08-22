#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    char sec;
};

int main(){
    Student s1;
    s1.name="Jan";
    s1.roll=543;
    s1.sec='A';
    cout<<"Name: "<<s1.name<<endl<<"Roll No.: "<<s1.roll<<endl<<"Section: "<<s1.sec;
}