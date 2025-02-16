#include <iostream>

using namespace std;

void Welcome()
{
    cout << "Welcome to Trivia!" << endl;
    cout << "===================" << endl;
    cout << "no fair looking online" << endl<< endl<< endl;

}

void checkAnswer(string answer, string correctAnswer, int &score)
{
    if(answer == correctAnswer)
    {
        cout << "you are correct" << endl;
        cout << "you earn 1 point! " << endl;
        score ++;
    }
    else
    {
        cout << "Sorry, sucks to suck!" << endl;
    }
}

int main()
{
    string answer;
    int score = 0;

    Welcome();

    cout<< "Lake Chapala is the largest freshwater lake in which country? : ";
    getline(cin, answer);
    checkAnswer(answer, "Mexico", score);
    
    cout<< "Mac Gargan is the alter ego of which Spider-man villain? : ";
    getline(cin, answer);
    checkAnswer(answer, "Scorpion", score);

    cout << "your score is "  << score << endl;
    return 0;
}