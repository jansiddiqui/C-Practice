#include<iostream>
using namespace std;

class Time{
    int hours;
    int minutes;
    int seconds;
    public:
    Time(int totalSeconds){
        hours = totalSeconds/3600;
        totalSeconds %= 3600;
        minutes = totalSeconds/60;
        seconds = totalSeconds % 60;
    }
    void display()const{
        cout << hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<<endl;
    }
};
int main(){
    int totalSeconds = 5000;
    Time t = totalSeconds;
    cout<<"Time converted from "<< totalSeconds<<" seconds is: ";
    t.display();
    return 0;
}