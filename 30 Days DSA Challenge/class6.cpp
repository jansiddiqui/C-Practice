#include<iostream>
using namespace std;
class StudentGrade{
    public:
        string name;
        string subject;
        int marks;
    public:
        void calculateGrade(){
            if(marks>=90){
                cout<<"Grade: A"<<endl;
            }else if(marks>=75){
                cout<<"Grade: B"<<endl;
            }else if(marks>=50){
                cout<<"Grade: C"<<endl;
            }else if(marks<50){
                cout<<"Grade: F"<<endl;
            }
        }
        void displayStudentInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Subject: "<<subject<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main(){
    StudentGrade s1;
    s1.name="John";
    s1.subject="Maths";
    s1.marks=90;
    s1.displayStudentInfo();
    s1.calculateGrade();
    return 0;
}