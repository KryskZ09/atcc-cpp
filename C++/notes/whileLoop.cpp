#include <iostream>
using namespace std;

int main()
{
    /*
        while (condition)
        {
            statement(s);
        }
    */

   bool isRunning = true;
   while (isRunning) // while isRunning == true
    {
        string doStop;
        cout << "Hello World!" << endl;
        cout << "If you want to stop, type 'quit'.\nIf not, type anything else.\n -- ";
        cin >> doStop;

        if (doStop == "quit") isRunning = false; // If the user wants to stop, set isRunning to false. This ends the while loop.
    }

    cout << "You've now escaped the loop, welcome to reality." << endl;

    int a = 0;

    while (a <= 20)
    {
        cout << "Value of A: " << a << endl;
        a++;
    }

    return 0;
}
