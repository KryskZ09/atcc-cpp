// Clayton Jensen
// Programming 1
// September 9, 2019
// User Input Datatypes
// This is a program to utilize multiple data types and to include multiple outputs and inputs.

#include <iostream>
using namespace std;

int main()
{
    string userName;
    int userAge;
    float userBalance;
    char infoCorrect;

    cout << "What is your name?: ";
    cin >> userName;

    cout << "How old are you?: ";
    cin >> userAge;

    cout << "How much money do you have?\n(Don't include $): ";
    cin >> userBalance;

    cout << "Your name is " << userName << ", you are " << userAge << " years old, and you have $" << userBalance << "\nIs this correct?\n(t/f): ";
    cin >> infoCorrect;

    if (infoCorrect == 'f')
    {
        cout << "Sorry to hear that your information is not correct, run this program again and retry." << endl;
        return -1;
    }
    else
    {
        cout << "Welcome to our service, " << userName << "!" << endl;
        return 0;
    }
}

