#include<iostream>                        
#include <fstream> 
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

vector<string> createWordList()
{
    ifstream FileName;
    FileName.open("word_alpha.txt", ios::in);         
    vector<string> words;
    string x;
    if (!FileName) {                        
        cout<<"File doesn’t exist.";          
    }
    else 
    {                     
        while (!FileName.eof()){        
            getline(FileName, x);
            words.push_back(x);
        }
    }
    FileName.close();                  
    return words;
}

void wordListToFile(vector<string>& myVector)
{
    ofstream MyFile("output_words.txt");                       
    for(string x : myVector)
        MyFile<<x<<endl;
    MyFile.close();
}

int binarySearch(string str, vector<string>& wordList)
{
    int max = wordList.size()-1;
    int min = 0;
    int mean;
    int result = -1;
    while (max >= min )
    {
        mean = (max + min) / 2;
        cout << "\t max: " << max << "\t min: " << min << "\t mean: " << mean <<endl; 
        if(wordList[mean].compare(str)== 0)
        {
            cout << "Word has been found at index "  << mean << "." << endl;
            result = mean;
            min = max +  1;
        }
        else if (wordList[mean].compare(str) > 0)
        {
            cout << "searching left half, because: " + wordList[mean] << endl;
            max = mean - 1;
        }
        else 
        {
            cout << "searching right half, because: " + wordList[mean] << endl;
            min = mean + 1;
        }
    }
    if(result == -1)
    {
        cout << "\t max: " << max << "\t min: " << min << "\t mean: " << mean <<endl; 
        cout << wordList[mean];
        cout << "your word was never found.\n";
    }
    return result;
}


int main() 
{
    string word;
    vector<string> wordList = createWordList();
    wordListToFile(wordList);
    sort(wordList.begin(), wordList.end());
    cout << "Which word are you looking for? : " ;
    cin >> word;
    binarySearch(word, wordList);
}

