#include <iostream>

// Function declaration
void greet() {
    std::cout << "Hello, there!" << std::endl;
}

// Class definition
class Rectangle {
public:
    int length;
    int width;

    // Member function to calculate area
    int calculateArea() {
        return length * width;
    }
};

int main() {
    // Function call
    greet();

    // Creating an object of Rectangle class
    Rectangle rect;
    rect.length = 5;
    rect.width = 3;

    // Calculating and displaying area
    std::cout << "Area of Rectangle: " << rect.calculateArea() << std::endl;

    return 0;
}
