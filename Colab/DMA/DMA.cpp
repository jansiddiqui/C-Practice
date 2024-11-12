/*
Dynamic Memory Allocation
Syntax :- Pointer_variable=new data_type;
int *m = NULL
m = new int 
int *m = new int
int *m = new int
int *m = new int(20);
Float *d = new float(21.01);
Syntax :- delete pointer_variable_name
*/

#include<iostream>
using namespace std;

int main(){
    // Allocate integer memory
    int* p = new int();
    cout<<"Value of p: "<<*p<<endl;
    // Allocate float memory
    float* r = new float();
    cout<<"Value of r: "<<*r<<endl;
    int n = 5;
    // Allocate array memory
    int* q = new int[n]{1,2,3,4,5};
    cout<<"Value in array: ";
    for(int i=0; i<n; ++i){
        cout<<q[i]<<" ";
    }
    // Free integer memory
    delete p;
    // Free float memory
    delete r;
    // Free array memory
    delete[] q;
    return 0;
}