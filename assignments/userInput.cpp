#include <iostream>
using namespace std;

int main()
{
    string fName;
    string lName;

    cout << "What is your first name?: ";
    cin >> fName;

    cout << "What is your last name?: ";
    cin >> lName;

    cout << "Hello " << fName << " " << lName << "!" << endl;

    return 0;
}