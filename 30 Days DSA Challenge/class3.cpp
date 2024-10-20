#include<iostream>
using namespace std;

class Employee{
    public:
        string name;
        float salary;
        int yearsworked;
    public:
        void DisplayEmployeeInfo(){
            cout<<"Name of the employee: "<<name<<endl;
            cout<<"Salary of the employee: Rs. "<<salary<<endl;
            cout<<"Years of work experience: "<<yearsworked<<" Years"<<endl;
        }
};
int main(){
    Employee employee1;
    employee1.name="Lakhan";
    employee1.salary=50000.25;
    employee1.yearsworked=8;
    cout<<"Employee1: "<<endl;
    employee1.DisplayEmployeeInfo();
    Employee employee2;
    employee2.name="Rohan";
    employee2.salary=200000.56;
    employee2.yearsworked=12;
    cout<<"Employee 2: "<<endl;
    employee2.DisplayEmployeeInfo();
    return 0;
}