#include<iostream>
int main(){
    std::cout<<"Enter three numbers";
    int x{};
    int y{};
    int z{};
    std::cin>>x>>y>>z;
    std::cout<<"You entered "<<x<<", "<<y<<", "<<z<<".";
    return 0;
}