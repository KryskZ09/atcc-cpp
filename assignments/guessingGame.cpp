// Clayton Jensen
// November 13, 2019
// Programming 1
// Guessing Game

#include <iostream>
using namespace std;

void game(int diffMax=0, bool error=false)
{
    if (error)
    {
        cout << "An error has occurred!\n";
        return;
    }

    srand(time(0));

    cout << "HINT: The answer is between 1 and " << diffMax << endl;
    int answer = (rand() % diffMax) + 1;
    int guess;
    int tries = 0;

    bool brokenInput = false;

    while (guess != answer)
    {
        cout << "> ";
        cin >> guess;

        if (!cin)
        {
            cout << "Incorrect Input!\n";
            return;
        }
        
        string hint;
        guess < answer ? hint = "Too Low..." : guess > answer ? hint = "Too High..." : hint = "Correct!";
        cout << hint << endl;

        cout << endl;
        tries++;
    }

    if (!brokenInput)
    {
        cout << "You have won!\nScore: " << tries << (tries == 1 ? " try!" : " tries!") << endl;
    }
}

int main()
{
    char diffChoice;
    cout << "Welcome to the number game, choose a difficulty:\nA) EASY (1 - 10)\nB) MEDIUM (1 - 50)\nC) HARD (1 - 100)\n> ";
    cin >> diffChoice;

    diffChoice == 'A' ? game(10) : diffChoice == 'B' ? game(50) : diffChoice == 'C' ? game(100) : game(0, true);
}
