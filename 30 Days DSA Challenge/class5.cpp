#include<iostream>
using namespace std;

class BankAccount{
    public:
        int accountNumber;
        float balance;

    public:
        void deposit(float amount){
            balance += amount;
        }
        void withdraw(float amount){
            if(amount<=balance){
                balance-=amount;
            }else{
                cout<<"Insufficient balance!"<<endl;
            }
        }
        void displayAccountInfo(){
            cout<<"Account Number: "<<accountNumber<<endl;
            cout<<"Current Balance: $"<<balance<<endl;
        }
};
int main(){
    BankAccount account1;
    account1.accountNumber=1235624;
    account1.balance=5000.0f;

    account1.displayAccountInfo();

    cout<<"\nDepositing $200..."<<endl;
    account1.deposit(200);
    account1.displayAccountInfo();

    cout<<"\nWithdrawing $300..."<<endl;
    account1.withdraw(300);
    account1.displayAccountInfo();

    cout<<"\nWithdrawing $6000..."<<endl;
    account1.withdraw(6000);
    account1.displayAccountInfo();

    return 0;
}