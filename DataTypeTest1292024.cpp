#include <iostream>

using namespace std;

int main()
{
    //declare variables
    double celciusNum;
    double fahrenNum;

    //get double celcius number from user
    cout << "What celcius temp would you like to convert: ";
    cin >> celciusNum;

    //convert to fahrenheit  is  (celciusNum * (9/5.)) + 32
    fahrenNum = (celciusNum * (9/5.)) + 32;

    //output to console the new value
    cout << celciusNum << " is " << fahrenNum << " in Fahrenheit." << endl;

    return 0;
}
