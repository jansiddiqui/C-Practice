#include <iostream>

int main() {
    int* ptr = new int[5]();
    std::cout << ptr[3];
    delete[] ptr;
    return 0;
}