// Clayton Jensen
// Programming 1
// September 30, 2019
// Grade Calculator Using If/Else

#include <iostream>
using namespace std;

int main()
{
    int
        gOne,
        gTwo,
        gThree,
        gFour,
        gAverage; // (gOne + gTwo + gThree) / 3

    char
        letterGrade;

    string
        congratString;

    cout << "First Quarter Grade Percentage: %";
    cin >> gOne;

    cout << "Second Quarter Grade Percentage: %";
    cin >> gTwo;

    cout << "Third Quarter Grade Percentage: %";
    cin >> gThree;

    cout << "Fourth Quarter Grade Percentage: %";
    cin >> gFour;

    gAverage = (gOne + gTwo + gThree + gFour) / 4;

    if (gAverage >= 90)
    {
        letterGrade = 'A';
        congratString = "Congratulations, you're passing the class!";
    }
    else if (gAverage >= 80)
    {
        letterGrade = 'B';
        congratString = "You're almost there, strive for the A!";
    }
    else if (gAverage >= 70)
    {
        letterGrade = 'C';
        congratString = "You need to study harder and get out of a C! Keep trying!";
    }
    else if (gAverage >= 60)
    {
        letterGrade = 'D';
        congratString = "Hopefully you're focused on improving, don't fall behind!";
    }
    else
    {
        letterGrade = 'F';
        congratString = "Are you even taking this class seriously? Come on now.";
    }

    cout << congratString << endl;
    cout << "Your average grade is: " << gAverage << '%' << endl;
    cout << "Your letter grade is: " << letterGrade << endl;

    return 0;
}
