#include<iostream>
using namespace std;
class Movie{
    public:
        string title;
        string genre;
        float rating;
    public:
        void displayMovieInfo(){
            cout<<"Title: "<<title<<endl;
            cout<<"Genre: "<<genre<<endl;
            cout<<"Rating: "<<rating<<endl;
        }
};
int main(){
    Movie movie1, movie2;
    movie1.title="Dangle";
    movie1.genre="Inspirational";
    movie1.rating=4.8;
    cout<<"Movie 1: "<<endl;
    movie1.displayMovieInfo();
    cout<<"\n";
    movie2.title="Pathan";
    movie2.genre="Romance+Inspirational";
    movie2.rating=4.5;
    cout<<"Movie 2:"<<endl;
    movie2.displayMovieInfo();
    return 0;
}