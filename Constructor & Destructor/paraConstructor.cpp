#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    Complex(int , int);
    void printNumber(){
        cout<<"Complex Number: "<<a<<" + "<<b<<" i "<<endl;
    }
};
Complex::Complex(int x, int y){ // This is a parameterized constructor
    a=x;
    b=y;

}
int main(){
    //Implicit call
    Complex c(9,7);

    //Explicit call
    Complex a = Complex(6,30);
    a.printNumber();
    c.printNumber();
    return 0;
}