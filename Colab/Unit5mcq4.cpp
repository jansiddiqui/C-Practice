#include <iostream>
using namespace std;
class Employee {
public:
    Employee(const char* n, int i) : name(n), id(i) {}
    int getID() { return id; }
private:
    const char* name;
    int id;
};

int main() {
    Employee* e1 = new Employee("John", 101);
    Employee* e2 = new Employee("Alice", 102);
    Employee* e3 = e1;
    std::cout << e3->getID() << std::endl;
    delete e1;
    delete e2;
    return 0;
}