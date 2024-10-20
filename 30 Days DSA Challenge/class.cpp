#include<iostream>
using namespace std;

class Jan {
    public:
        string color;
        int age;
        int height;
        string degree;
    public:
        void DisplayInfo(){
            cout<<"Skin color of Jan: "<<color<<endl;
            cout<<"Age of Jan: "<<age<<endl;
            cout<<"Height of Jan: "<<height<<"cm"<<endl;
            cout<<"Degree of Jan: "<<degree<<endl;
        }
};
int main(){
    Jan janinfo;

    janinfo.color="White Brown";
    janinfo.age=20;
    janinfo.height=175;
    janinfo.degree="B.Tech in Computer Science and Engineering in Artificial Intelligence and Machine Learning";

    janinfo.DisplayInfo();

    return 0;
}