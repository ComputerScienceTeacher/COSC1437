#include <iostream>

using namespace std;

int main()
{
    int fibDegree;
    int counter = 3;
    long holdingValue = 1L;
    long prevValue = 1L;
    long tempValue;
    cout<< "how many numbers in the fibonacci sequence do you want to see? : " ;
    cin >> fibDegree;
    cout << holdingValue << " ";
    cout << prevValue << " ";
    for(int i = counter; i <= fibDegree; i++)
    {
        tempValue = prevValue + holdingValue;
        prevValue = holdingValue;
        holdingValue = tempValue;
        cout  << holdingValue << " ";
    }

    return 0;
}