#include<iostream>
using namespace std;
class Student
{
    string name;
    int roll;
    char sec;
    public:
    void display(string a, int b, char c){
        name = a;
        roll = b;
        sec = c;
        cout<<name<<endl<<sec<<endl<<roll;
    }
};
int main(){
    Student s1;
    s1.display("Jan",48,'b');
}