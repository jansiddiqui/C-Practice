#include <iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    // Creating constructor
    // Constructor is a special member function with same name as of the class.
    // It is automatically invoked when ever an object is created
    // It is used to initialize the  obje t of its class.
    Complex(void); //Constructor declaration
    void printNumber()
    {
        cout<<"Your number is "<<a<<" + "<<b<<" i "<<endl;
    }
};
Complex :: Complex(void){ //-> Default constructor
    a=0;
    b=0;
    cout<<"Hello World"<<endl;
}
int main(){
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}


/* Properties of Constructor
1. It should be decrlared in the public section of the class 
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have any return types
4. It can have default arguments
5. We cannot refer to their address
*/