// Accessing private member of a class
#include<iostream>
using namespace std;

class Circle{
    private:
    double radius;
    public:
    double area(double r)
    {
        radius = r;
        cout<<radius<<endl;
        cout<< 3.14*radius*radius;
    }
};
int main(){
    Circle c;
    c.area(5);
}