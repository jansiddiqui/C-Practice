#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
    Complex(int r=0, int i=0) : real(r),imag(i){}

    Complex operator+(const Complex &obj){
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void display() const{
        if(imag>=0)
            cout<<real<<" + "<<imag<<"i"<<endl;
        else
            cout<<real<<" - "<<-imag<<"i"<<endl;
    }
};
int main(){
    Complex c1(2);
    Complex c2(4,5);
    cout<<"First Complex NUmber: ";
    c1.display();
    cout<<"Second Complex Nnumber: ";
    c2.display();
    Complex c3 = c1 + c2;
    cout<<"Sum of Complex Numbers: ";
    c3.display();
    return 0;
}