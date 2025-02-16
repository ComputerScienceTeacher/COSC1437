#include<iostream>

using namespace std;

int main()
{
    char testChar;
    string testString = "ABCDFabcdf";
    cout << "Please input a character: " << endl;
    cin >> testChar;
    if(testString.find(testChar) != string::npos)
    {
        cout << "valid" << endl;
    }
}