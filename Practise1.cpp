// Accessing private number of class
#include<iostream>
using namespace std;
class Circle
{
    double radius;
    public:
        double area(double r)
    {
        radius= r;
        cout<<radius<<endl;
        cout<<3.14*radius*radius;
    }
};
int main()
{
    Circle c1;
    c1.area(7.5);
}