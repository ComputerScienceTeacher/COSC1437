#include <iostream>
#include <cstdlib>

//#include <string>

using namespace std;

int main()
{
    int sizes[8][5] = {0};
    cout << "rows: " << end(sizes) - begin(sizes) << endl;
    cout << "columns: " << end(sizes[0]) - begin(sizes[0]) << endl;
    cout << endl << endl << "======================= MY ARRAY ======================" << endl;
    srand(time(0));
    for(int i = 0; i< 8; i++)
    {
        for(int j = 0; j<5 ; j++)
        {
            sizes[i][j] = rand();
            cout << sizes[i][j] << "\t\t";      
        }
        cout << endl;
    }
    
}