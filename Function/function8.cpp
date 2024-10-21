#include<iostream>
using namespace std;

int SumArray(int arr[], int size){
    int sum =0;
    for(int i=0; i<size; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter the size of the elements in the array: ";
    cin>> size;
    int arr[size];
    cout<<"Enter "<<size<<" elements: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int totalSum=SumArray(arr,size);
    cout<<"The sum of the array elements is: "<<totalSum<<endl;
    return 0;
}