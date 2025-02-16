#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    /* for debugging purposes only
    cout << RAND_MAX << endl;
    for(int x = 0; x < 12; x++)
    {
        cout << rand()%50 << endl;
        
    }
    */

    int userNum;
    int magicNum;
    
    for(int x = 0; x < 12; x++)
    {
        cout << rand()%50 << endl;
        
    }

    magicNum = rand()%50;
    cout << "Guess a number: "  ;
    cin >> userNum;

    while (userNum != magicNum)
    {
        if(magicNum>userNum)
        {
            cout << "Too Low!"  << endl;
        }
        else
        {
            cout << "Too High!"  << endl;
        }
        cout << "Try again: "  ;
        cin >> userNum;
    } 
    cout << "You did it! Good Job!" << endl;
    return 0;

}