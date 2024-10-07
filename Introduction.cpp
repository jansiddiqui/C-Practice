#include<iostream>
using namespace std;

int main(){
    string name1,name2,Class,address,father1,father2;
    cout<<"Enter your first name: ";
    cin>>name1;
    cout<<"Enter your last name: ";
    cin>>name2;
    cout<<"Enter your class: ";
    cin>>Class;
    cout<<"Enter your father first name: ";
    cin>>father1;
    cout<<"Enter your father last name: ";
    cin>>father2;
    cout<<"Enter your address: ";
    cin>>address;
    cout<<"Good Morning, I'm "<<name1<<" "<<name2<<". I'm in class "<<Class<<". My father name is "<<father1<<" "<<father2<<". I'm from "<<address<<".";
    return 0;
}