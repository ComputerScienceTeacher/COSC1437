#include <iostream>

using namespace std;

int main ()
{
    int testNum;
    cout << "Enter a num: ";
    cin >> testNum;
    
    if(testNum < 0)
    {
        testNum *= -1;
    }

    cout << "The absolute value is " << testNum << endl;
    return 0;
}