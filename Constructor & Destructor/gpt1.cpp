#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class BankAccount{
    string name;
    int accountNumber;
    double balance;
    public:
    BankAccount(string n, int a, double b){
        name =n;
        accountNumber = a;
        balance = b;
        cout<<"Account created for "<<name<<" with Account Number:"<<accountNumber<<endl;
    }
    ~BankAccount(){
        cout<<"Account cloased for "<<name<<endl;
    }
    void deposit(double amount){
        balance+=amount;
        cout<<"Deposited: "<<amount<<". New Balance: "<<fixed<<setprecision(2)<<balance<<endl;
    }
    void withdraw(double amount){
        if(amount < balance){
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<". New balance: "<<fixed<<setprecision(2)<<balance<<endl;
        }else{
            cout<<"Insufficient balance!"<<endl;
        }
    }
    void display(){
        cout<<"Account Holder: "<<name<<endl;
        cout<<"Account number: "<<accountNumber<<endl;
        cout<<"Balance: "<<fixed<<setprecision(2)<<balance<<endl;
    }
};
int main(){
    BankAccount acc1("Jan Mohammad", 75534677, 88877876);
    acc1.display();
    acc1.deposit(3000);
    acc1.withdraw(8000);
    acc1.withdraw(890000000);
    acc1.display();
    return 0;
}