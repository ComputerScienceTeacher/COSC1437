/*

📌 Key Topics:

Sequential execution
Selection (branching with if and switch)
Repetition (loops – covered in later lessons)


Relational Operators <, >, <=, >=, ==, !=
Logical Operators && (AND), || (OR), ! (NOT)

*/

#include <iostream>
#include <cassert>

using namespace std;

int main () {
    int x;
    cout << "Enter a positive number: ";
    cin >> x;

    assert(x > 0);
    cout << "You entered: " << x << endl;



    /*
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << (num % 2 == 0 ? "Even" : "Odd") << endl;
    int choice;
    cout << "Menu: \n\t1. Start \n\t2. Stop  \n\t3. Exit" << endl;
    cin >> choice;

    switch (choice) {
        case 1: cout << "Starting..." << endl; break;
        case 2: cout << "Stopping..." << endl; break;
        case 3: cout << "Exiting..." << endl; break;
        default: cout << "Invalid choice!" << endl;
    }
    
    

    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age <= 18 || age >= 65) {
        cout << "You are not eligible for work." << endl;
    }

    return 0;

    
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num != 0) {
        if(num >0){
            cout << "The number is positive." << endl;
        }
        else {
            cout << "The number is negative." << endl;
        }
    } 
    else {
        cout << "The number is zero." << endl;
    }

    
    int a = 10, b = 5;

    cout << "a > b: " << (a > b) << endl;
    cout << "a == b: " << (a == b) << endl;
    */

    return 0;
 
}