#include <iostream>
using namespace std;
class Distance{
    int feet;
    int inches;
    public:
    Distance(int f=0, int i=0){
        feet = f;
        inches = i;
        normalize();
    }
    void normalize(){
        if (inches>=12){
            feet += inches/12;
            inches = inches %12;
        }else if (inches<0){
            int borrowedFeet = (abs(inches) + 11)/12;
            feet -= borrowedFeet;
            inches += borrowedFeet*12;
        }
        if (feet<0 && inches>0){
            feet += 1;
            inches -= 12;
        }
    }
    Distance operator-(const Distance &obj){
        Distance temp;
        temp.feet = feet - obj.feet;
        temp.inches = inches-obj.inches;
        temp.normalize();
        return temp;
    }
    void display()const{
        cout<<feet<<" feet "<<inches<<" inches"<<endl;
    }
};
int main(){
    Distance d1(5,10);
    Distance d2(3,8);

    cout<<"Fisrt Distance: ";
    d1.display();
    cout<<"Second Distance: ";
    d2.display();
    Distance d3 = d1 - d2;
    cout<<"Subtracted Distance: ";
    d3.display();
    return 0;
}