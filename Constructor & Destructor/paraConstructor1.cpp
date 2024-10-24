#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
    Point(int a,int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};


int main(){
    Point a(9,8);
    a.displayPoint();
    Point b(7,5);
    b.displayPoint();
    return 0;
}
