#include <iostream>

using namespace std;

int main()
{
    //declaration of variables
    int num;

    
    cout << "Enter an integer: ";
    cin >> num;
    cout << endl;
    if (0 <= num && num <= 10)
    {
        cout << num << " is within 0 and 10." << endl;
    }
    else
    { 
        cout << num << " is not within 0 and 10." << endl;
    }
    return 0;
}