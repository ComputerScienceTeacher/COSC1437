#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("example.txt");
    for(int i = 0; i<5; i++)
    {
        outFile << i+1 << ": Hello, file I/O in C++!" << endl;
    }
    outFile.close();
    
    ifstream inFile("example.txt");
    string content;
    getline(inFile, content);
    cout << "Read from file: " << content << endl;
    inFile.close();
    
    return 0;
}