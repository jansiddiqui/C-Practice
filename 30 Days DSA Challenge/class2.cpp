#include <iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    int pages;
    public:
    void DisplayBookInfo(){
        cout<<"Title of the book: "<<title<<endl;
        cout<<"Author of the book: "<<author<<endl;
        cout<<"Number of pages in the book: "<<pages<<endl;
    }
};
int main(){
    Book book1;
    book1.title="Rich Dad Poor Dad";
    book1.author="Robert Kiyoski";
    book1.pages=200;
    cout<<"Book 1 :"<<endl;
    book1.DisplayBookInfo();
    Book book2;
    book2.title ="Love";
    book2.author="Heart Yard";
    book2.pages=100;
    cout<<"Book 2: "<<endl;
    book2.DisplayBookInfo();
    return 0;
}