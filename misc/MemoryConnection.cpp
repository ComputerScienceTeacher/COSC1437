#include <iostream>

using namespace std;

int main() {
    // Variable declaration and initialization
    int x = 42;

    // Printing memory address of variable
    cout << "Memory Address of x: " << &x << endl;

    // Using pointers to access memory address
    int* ptr = &x;

    // Printing value and memory address through pointer
    cout << "Value of x: " << *ptr << endl;
    cout << "Memory Address through pointer: " << ptr << endl;

    return 0;
}
