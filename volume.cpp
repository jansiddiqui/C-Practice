#include<iostream>
using namespace std;

int main(){
    float r,volume;
    cout<<"Enter the radius of the sphere: ";
    cin>>r;
    volume=4.0/3.0*3.14*r*r*r;
    cout<<"The volume of the sphere is: "<<volume;
    return 0;
}