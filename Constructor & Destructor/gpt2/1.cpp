#include<iostream>
using namespace std;

class Rectangle{
    double length;
    double width;
    public:
    Rectangle(){
        length = 0;
        width = 0;
        cout<<"The default Rectangle created with length = 0 and width = 0."<<endl;

    }
    Rectangle(double l, double w){
        length = l;
        width = w;
        cout<<"Rectangle is created with length: "<<length<<" and width: "<<width<<endl;
    }
    ~Rectangle(){
        cout<<"The Rectangle is destroyed."<<endl;
    }

    double area(){
        return length * width;
    }
    double perimeter(){
        return 2*(length + width);
    }
    void display(){
        cout<<"The Length of Rectangle is: "<<length<<endl;
        cout<<"The Width of Rectangle is: "<<width<<endl;
        cout<<"The Area of Rectangle is: "<<area()<<endl;
        cout<<"The Perimeter of Rectangle is: "<<perimeter()<<endl;
        cout<<endl;
    }
};
int main(){
    Rectangle r1;
    r1.display();
    Rectangle r2(3.5,2);
    r2.display();
    return 0;
}