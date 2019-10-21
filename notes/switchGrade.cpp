// Clayton Jensen
// Programming 1
// October 21, 2019

#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter your test grade: (0 to 100): ";
    cin >> grade;

    switch (grade / 10)
    {
    case 10:
    case 9:
        cout << "The grade is an A\n";
        break;
    case 8:
        cout << "The grade is a B\n";
        break;
    case 7:
        cout << "The grade is a C\n";
        break;
    case 6:
        cout << "The grade is a D\n";
        break;
    case 5:
        cout << "The grade is an F\n";
        break;
    default:
        cout << "You did horrible, come on now...\n";
        break;
    }
}
