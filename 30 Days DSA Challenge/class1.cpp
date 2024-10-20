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

    car.brand="TATA";
    car.model="Nexon";
    car.year=2020;

    car.displayCarInfo();

    return 0;
}