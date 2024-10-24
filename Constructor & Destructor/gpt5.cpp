#include<iostream>
using namespace std;

class Car{
    string model;
    string licensePlate;
    double rentalPrice;
    public:
    Car(string m, string lp, double rp){
        model =m;
        licensePlate = lp;
        rentalPrice = rp;
        cout<<"Car Created: "<<model<<" - "<<licensePlate<<endl;
    }
    ~Car(){
        cout<<"Car Removed: "<<model<<" - "<<licensePlate<<endl;
    }

    void displayDetails(){
        cout<<"Model: "<<model<<", License Plate: "<<licensePlate<<", Rental Price: "<<rentalPrice<<endl;
    }
};
int main(){
    Car car1("Brezza","MN07",42090);
    car1.displayDetails();
    Car car2("SUV 800","UP78",50000);
    car2.displayDetails();
    return 0;
}