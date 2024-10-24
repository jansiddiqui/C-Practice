#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Distance{
    int x,y;
    public:
    Distance(int a1, int b1) : x(a1), y(b1){}
    friend double computeDistance(const Distance& d1, const Distance& d2);
};
double computeDistance(const Distance& d1, const Distance& d2){
    int dx=d2.x - d1.x;
    int dy=d2.y - d1.y;
    return sqrt(dx*dx + dy*dy);
}

int main(){
    Distance d1(2,3);
    Distance d2(4,5);
    cout<<"The distance between the two points is "<<fixed<<setprecision(2)<<computeDistance(d1, d2)<<"."<<endl;
    
    return 0;
}