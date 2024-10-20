#include<iostream>
using namespace std;
class Rectangle{
    public:
        float length;
        float width;
    public:
        void calculateArea(){
            float area = length * width;
            cout<<"Area of the reactangle: "<<area<<"m^2"<<endl;
        }
        void calculatePerimeter(){
            float perimeter = 2 * (length + width);
            cout<<"Perimeter of the rectangle: "<<perimeter<<"m"<<endl;
        }
};
int main(){
    Rectangle r;
    r.length=5;
    r.width=3;
    cout<<"Length: "<<r.length<<endl;
    cout<<"Width: "<<r.width<<endl;
    cout<<endl;
    r.calculateArea();
    r.calculatePerimeter();
    return 0;
}