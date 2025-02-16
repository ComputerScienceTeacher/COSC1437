#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

void printVector(vector<int> myVector);
vector<int> initializeVector(int vectorSize);
void selectionSort(vector<int> myVector);
void insertionSort(vector<int> myVector);

int main ()
{
    int vectorSize = 6;
    vector<int> myVector = initializeVector(vectorSize);
    selectionSort(myVector);
    printVector(myVector);
    insertionSort(myVector);
}
   

void insertionSort(vector<int> myVector)
{
    // ANSI color codes for terminal color formatting
    string GREEN = "\u001b[32m"; // Green color
    string RED = "\u001b[31m"; // Red color
    string RESET = "\u001b[0m"; // Reset color

    int currElement, numIterations = 0, numSwaps = 0;
    for(int i = 0; i<myVector.size(); i++)
    {
        //take the first value from the unsorted part of the array
        currElement = myVector[i];
        int j = i - 1;

        //move the next valeu into the correct place in the sorted part of the array
        while(j > -1 && myVector[j] > currElement)
        {
            numIterations ++;
            myVector[j + 1] = myVector[j];
            j--;
        }

        myVector[j + 1] = currElement;
        cout << "pass" << i << ": ";
        numSwaps++;

        int k = 0;
        for(; k<=i; k++)
        {
            cout << GREEN << myVector[k] << RESET << ", ";
        }
        for(; k<myVector.size() - 1; k++)
        {
            cout << RED << myVector[k] << RESET << ", ";
        }
        if(k < myVector.size())
        {
            cout << RED << myVector[k] << RESET << endl;
        }
    }

    cout << endl <<  "There were " << numIterations << " iterations and ";
    cout << numSwaps << " swaps." << endl;
}



void selectionSort(vector<int> myVector)
{
    // ANSI color codes for terminal color formatting
    string GREEN = "\u001b[32m"; // Green color
    string RED = "\u001b[31m"; // Red color
    string RESET = "\u001b[0m"; // Reset color

    int numOfIterations=0;
    int numOfSwaps=0;
    for (int i = 0; i < myVector.size() - 1; i++) {
        int minIndex = i;
        // Find the index of the minimum element in the unsorted portion of the array
        for (int j = i + 1; j < myVector.size(); j++) {
            numOfIterations++;
            if (myVector[j] < myVector[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the current element with the minimum element found
        if (minIndex != i) {
            int temp = myVector[i];
            myVector[i] = myVector[minIndex];
            myVector[minIndex] = temp;
            numOfSwaps++;
        }
        int k = 0;
        for(; k<=i; k++)
        {
            cout << GREEN << myVector[k] << RESET << ", ";
        }
        for(; k<myVector.size() - 1; k++)
        {
            cout << RED << myVector[k] << RESET << ", ";
        }
        cout << RED << myVector[k] << RESET << endl;
    }
    cout <<  "There were " << numOfIterations << " iterations and ";
    cout << numOfSwaps << " swaps." << endl;
}

vector<int> initializeVector(int vectorSize)
{
    vector<int> intVector;
    srand(time(0));
    for (int i = 0; i<vectorSize; i ++)
    {   
        intVector.push_back(rand()%100);
    }

    printVector(intVector);
    return intVector;
}

void printVector(vector<int> myVector)
{
    int i = 0;
    for (; i< myVector.size()-1; i++)
    {
        cout << myVector[i] << ", ";
    }
    cout << myVector[i] << endl;
}