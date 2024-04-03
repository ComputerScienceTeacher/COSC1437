#include <iostream>

using namespace std;

double opp(double x, double y, char z)
{
    double result;
     switch (z)
    {
        case '+':
        result = x+y;
        break;

        case '-':
        result = x-y;;
        break;

        case '*':
        result = x*y;
        break;

        case '/':
        result = x/y;
        break;
    }
    return result;
}

int main()
{
    double num1, num2;
    char eebers;
    cout << "Enter first number >>\n";
    cin >> num1;
    cout << "Enter the second number\n";
    cin >> num2;
    cout << "Enter the opperation (+ - * /)\n";
    cin >> eebers;
    cout << num1 << endl << eebers << endl << num2 << endl << "=" << endl;
    cout << opp(num1, num2, eebers) << endl;
    return 0;
}