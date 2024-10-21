#include<iostream>
using namespace std;

int  add(int a, int b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
int main(){
    cout<<add(5,3)<<endl;
    cout<<add(4.2,3.8)<<endl;
    return 0;
}