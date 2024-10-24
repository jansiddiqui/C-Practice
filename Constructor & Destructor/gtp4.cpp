#include<iostream>
using namespace std;

class Array{
    int *arr;
    int size;
    public:
    Array(int s){
        size = s;
        arr = new int[size];
        cout<<"Array of size "<<size<<" created."<<endl;
    }
    ~Array(){
        delete[] arr;
        cout<<"Array memory freed"<<endl;
    }
    void fillArray(){
        cout<<"Enter "<<size<<" elements for the array:"<<endl;
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
    }
    void display(){
        cout<<"Array elements are: "<<endl;
        for (int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    Array arr1(n);
    arr1.fillArray();
    arr1.display();
    return 0;
}