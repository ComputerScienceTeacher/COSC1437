/* 
 ** 
 ** Computers are classified into three main types: 
 ** Mainframe, Midsize, and Microcomputers 
 ** (which include personal computers). 
 ** Every computer has two main components: 
 ** Hardware and Software. 
 **
 */

#include <iostream>
using namespace std;

/* 

📌 Key Topics:
Special symbols (+, -, *, /, ==, !=)
Reserved keywords (int, return, char)

🎤 Script:
"C++ uses special symbols like +, -, *, and ==. Reserved words like int, return, and char cannot be redefined."


🎤 Data Type
Integral (int, char)
Floating-point (float, double)
Boolean (bool)
String (string)


*/

#include <iostream>
using namespace std;

//this is the main method
int main() {
    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout << "You entered " << a << " & " << b << endl;
    cout << "After ++ a becomes "  << ++a << " and b becomes " << ++b << endl;
    cout << "After -- a becomes "  << --a << " and b becomes " << --b << endl;
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl; //integer division drops the decimal
    cout << "Modulus: " << (a % b) << endl; // modulus gives the remainder after integer division

    return 0;
}