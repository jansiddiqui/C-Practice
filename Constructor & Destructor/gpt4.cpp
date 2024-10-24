#include<iostream>
#include<string>
using namespace std;
class Student{
    string name;
    int rollNumber;
    int marks[3];
    public:
    Student(){
        name = "Unknown";
        rollNumber = 0;
        for (int i = 0; i<3; i++){
            marks[i]=0;
        }
        cout<<"Default Student created with name = Unknown, roll number=0, and marks =0, 0, 0"<<endl;
    }
    Student(string stuName, int stuRoll, int m1, int m2, int m3){
        name = stuName;
        rollNumber=stuRoll;
        marks[0]=m1;
        marks[1]=m2;
        marks[2]=m3;
        cout<<"Student created with name = "<<name<<" ,roll number = "<<rollNumber<<", marks = "<<m1<<","<<m2<<","<<m3<<endl;
    }
    ~Student(){
        cout<<"Student with name = "<<name<<" and roll number = "<<rollNumber<<" is destroyed."<<endl;
    }

    int totalMarks(){
        return marks[0]+marks[1]+marks[2];
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks[0]<<","<<marks[1]<<","<<marks[2]<<endl;
        cout<<"Total Marks: "<<totalMarks()<<endl;
    }
};
int main(){
    Student stud1;
    stud1.display();
    Student stud2("Jan Mohammad", 123, 78,98,57);
    stud2.display();
    return 0;
}