#include<iostream>
using namespace std;

class Person{
    Person(const char* n) : name(n) {}
    ~Person(){std :: cout << "Destructor called for "}
    private:
    const char* name;
};
int main(){
    Person* p1 = new Person("Alice");
    Person* p2 = new Person("Jan");
    delete p1;
    delete p2;
    return 0;
}