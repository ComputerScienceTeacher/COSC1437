#include <iostream>

int main() {
    // Variables and data types
    int num1 = 5;
    double num2 = 3.14;
    char letter = 'A';

    // Constants
    const int MAX_VALUE = 100;

    // Operators and expressions
    int result = num1 + 2 * num2;

    // Control flow statements
    if (result > MAX_VALUE) {
        std::cout << "Result is greater than MAX_VALUE." << std::endl;
    } else {
        std::cout << "Result is not greater than MAX_VALUE." << std::endl;
    }

    return 0;
}