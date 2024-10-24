#include<iostream>
#include<string>
using namespace std;

string reverseString(const string &str){
    string reversedStr;
    for(int i=str.length()-1;i>=0;i--){
        reversedStr += str[i];
    }
    return reversedStr;
}
int main(){
    string inputStr;
    cout<<"Enter a string:";
    getline(cin, inputStr);

    string result = reverseString(inputStr);
    cout<<"The reversed string is: "<<result<<endl;
    return 0;
}