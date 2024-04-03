#include <iostream>

using namespace std;

int factorialNumbers(int num);

int main ()
{
    int startingNum;
    cout << "What factorial do you want to see : ";
    cin >> startingNum;
    cout << factorialNumbers(startingNum) << endl;
}

int factorialNumbers(int num)
{
    cout << num << endl;
    if(num > 1)
    {
        num *= factorialNumbers(num-1);
    }
    return num;
}