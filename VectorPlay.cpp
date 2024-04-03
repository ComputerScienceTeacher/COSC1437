#include <vector>
#include <iostream>

using namespace std;

void printVector(vector<string> stdVector);
long sumArray(long sum, vector<int> myVector);

int main()
{
    vector <string> stuff = {"grapes", "carrots", "lemons"};
    vector <string> stuff2(stuff);

    vector <int> myIntArray;

    for(int i=1 ; i<= 10000; i++)
    {
        myIntArray.push_back(i);
    }

    cout << "the sum of my array is: " << sumArray(0, myIntArray) << endl;

    // stuff2[1] = "kiwi";

    

    // for(auto item : stuff2)
    // {
    //     stuff.push_back(item);
    // }

    // stuff.insert(stuff.begin() + 4, "banana");
    // stuff.erase(stuff.end() - 2);


    // printVector(stuff);


    // stuff.clear();
    // printVector(stuff);

    return 0;
}

void printVector(vector<string> myVector)
{
    for(auto item : myVector)
    {
        cout << item << " ";
    }
    cout << endl;
}

long sumArray(long sum, vector<int> myVector) { 
    if (myVector.empty()) {
        return sum;
    }
    sum += myVector.back();
    myVector.pop_back();
    return sumArray(sum, myVector);
}