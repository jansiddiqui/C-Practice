#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int year;
    public:
        void displayCarInfo(){
            cout<<"Brand of the Car: "<<brand<<endl;
            cout<<"Model of the Car: "<<model<<endl;
            cout<<"Year of the Car: "<<year<<endl;
        }
};
int main(){
    Car car;
    Car car1;
    car.brand="TATA";
    car.model="Nexon";
    car.year=2020;
    cout<<"Car 1 :)"<<endl;
    car.displayCarInfo();
    car1.brand="Hyundai";
    car1.model="Creta";
    car1.year=2018;
    cout<<"Car 2 :)"<<endl;
    car1.displayCarInfo();
    return 0;
}