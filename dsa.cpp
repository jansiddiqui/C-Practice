// You are using GCC
#include<iostream>
using namespace std;

void towerofHanoi(int n, char source, char middle, char destination)
{
    if(n==0)
    {
        return;
    }
    towerofHanoi(n-1,source,middle,destination);
    cout<<"Move disk "<<n<<" from rod "<<source<<"to rod"<<destination<<endl;
    towerofHanoi(n-1,middle,destination,source);
}
int main()
{
    int n;
    cin>>n;
    towerofHanoi(n, 'A', 'C', 'B');
    return 0;
}