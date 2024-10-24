#include<iostream>
#include<iomanip>
using namespace std;

class Rectangle{
    int length;
    int width;
    public:
    Rectangle(int l, int w): length(l),width(w){}
    Rectangle(const Rectangle &rect){
        length = rect.length;
        width =rect.width;
        cout<<"Copy Contruector Called!"<<endl;
    }
    ~Rectangle(){
        cout<<"Destructor Called!"<<endl;
    }
    void display(){
        cout<<"Length: "<<length<<" ,Width: "<<width<<endl;
    }
};
int main(){
    Rectangle a(3,4);
    a.display();
    return 0;
}