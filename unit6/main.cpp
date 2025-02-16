#include <iostream>
#include <cmath>
using namespace std;


/*
 
+,-,/,*  

C++ does not have an exponent operator. 

*/
int add(int a, int b) {
    cout << "int function called";
    return a+b;
}

int add(double a, double b) {
    cout << "double function called";
    return a+b;
}

double area(double, double); // Function prototype

void addPrompt() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << add(num1, num2) << endl;

    double num3, num4;
    cout << "Enter two numbers: ";
    cin >> num3 >> num4;
    cout << "Sum: " << add(num3, num4) << endl;

}

void cMathPrompt(){
    double num = 9.0;
    cout << "Square root of " << num << ": " << sqrt(num) << endl;
    cout << "Power of 2^3: " << pow(2, 3) << endl;
}


void areaPrompt(){
    double l,w;
    cout << "Enter length and width: ";
    cin >> l >> w;
    cout << "Area: " << area(l, w) << endl;
}


void greet(string name = "User") {
    cout << "Hello, " << name << "!" << endl;
}


int main() {
    //addPrompt();
    //cMathPrompt();
    //areaPrompt(); 
    greet();
    greet("Chad");

    return 0;
}



double area(double length, double width) {
    return length * width;
}