#include <iostream>

using namespace std;

int main() {
    // Constant declaration and initialization
    const int MAX_VALUE = 100;
    const double PI = 3.14159;

    // Using constants
    int x = MAX_VALUE;
    double circumference = 2 * PI * x;

    // Trying to modify constants (results in compilation error)
    // MAX_VALUE = 200;  // Compilation error: assignment of read-only variable 'MAX_VALUE'

    // Printing constants and results
    cout << "MAX_VALUE: " << MAX_VALUE << endl;
    cout << "PI: " << PI << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}