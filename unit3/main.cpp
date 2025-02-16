
/*

📌 Key Topics:

get() (Reads a single character, including whitespace)
ignore() (Skips characters)
putback() (Puts a character back into input stream)
peek() (Checks next character without extracting it)
clear() Handling incorrect input

*/
#include <iomanip>
#include <iostream>
using namespace std;


int main() {
    string name;
    cout << "Enter your full name: ";
    getline (cin, name);  
    cout << "Hello, " << name << "!" << endl;
    return 0;
}


/*
int main() {
    double price = 19.78598654;

    cout << fixed << setprecision(2);  // Show exactly 2 decimal places
    cout << "Price: $" << price << endl;


    return 0;

    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (cin.fail()) {
        cout << "Invalid input! Resetting..." << endl;
        cin.clear();
        cin.ignore(100, '\n');
    } else {
        cout << "You entered: " << number << endl;
    }

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello, this is a C++ I/O example! \nAnd you are " << age << " years old." << endl;
    cin.clear();
    char ch;
    cout << "Enter a character: ";
    cin.get(ch);  // Reads a single character including whitespaces
    cout << "You entered: " << ch << endl;
    cin.ignore(100, '\n'); // Skips remaining characters in the buffer
    return 0;
}
    */
