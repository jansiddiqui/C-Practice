// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string name;
    int seats;
    float price;

};

int main(){
    Car car1;
    car1.name="Thar";
    car1.price=2000000;
    car1.seats=7;
    cout<<"Name of the car: "<<car1.name<<endl<<"Price: "<<car1.price<<endl<<"Seats: "<<car1.seats<<endl;
    Car car2;
    car2.name="Bolero";
    car2.price=4000000;
    car2.seats=8;
    cout<<"Name of the car: "<<car2.name<<endl<<"Price: "<<car2.price<<endl<<"Seats: "<<car2.seats;
}