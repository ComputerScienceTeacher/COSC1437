#include <iostream>
using namespace std;

void changeValue(int x) { x = 100; }  // Pass-by-value
void changeReference(int &x) { x = 100; }  // Pass-by-reference

int main() {
    int num1 = 50, num2 = 50;
    
    changeValue(num1);
    cout << "After pass-by-value: " << num1 << endl;

    changeReference(num2);
    cout << "After pass-by-reference: " << num2 << endl;

    return 0;
}