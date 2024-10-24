#include<iostream>
using namespace std;

class Number{
    int value;
    public:
    Number(int v=0) : value(v){}

    void operator-(){
        value = -value;
    }

    void display()const{
        cout<<"Value: "<<value<<endl;
    };
};
int main(){
    Number n1(-12);
    cout<<"Original ";
    n1.display();
    -n1;
    cout<<"After applying unary minus: ";
    n1.display();

    return 0;
}