// Clayton Jensen
// Programming 1
// October 16, 2019
// Menu Program

#include <iostream>
#include <iomanip>
#include "ease/of_use.h"
using namespace std;

int main()
{
    // Accumulate a running total
    float totalPayment;

    int itemOneAmt, itemTwoAmt, itemThreeAmt, itemFourAmt;

    // Set running flag to true
    bool isRunning = true;
    while (isRunning)
    {
        ease::clear(); // Clear the screen on each menu print
        string userChoice;
        cout << "1) Item One\t:: $1.99\n"
                "2) Item Two\t:: $2.99\n"
                "3) Item Three\t:: $3.99\n"
                "4) Item Four\t:: $4.99\n"
                "Type 'QUIT' to exit...\n"
                "=================\n"
                "Select: ";
        cin >> userChoice;
        // Convert userChoice to lowercase for easier condition handling
        userChoice = ease::toLower(userChoice);

        if (userChoice == "quit")
        {
            isRunning = false;
        }
        else if (userChoice == "1")
        {
            cout << "How many items do you want?\n#: ";
            cin >> itemOneAmt;
        }
        else if (userChoice == "2")
        {
            cout << "How many items do you want?\n#: ";
            cin >> itemTwoAmt;
        }
        else if (userChoice == "3")
        {
            cout << "How many items do you want?\n#: ";
            cin >> itemThreeAmt;
        }
        else if (userChoice == "4")
        {
            cout << "How many items do you want?\n#: ";
            cin >> itemFourAmt;
        }
    }

    totalPayment += (itemOneAmt * 1.99);
    totalPayment += (itemTwoAmt * 2.99);
    totalPayment += (itemThreeAmt * 3.99);
    totalPayment += (itemFourAmt * 4.99);

    ease::clear();

    // cout << itemOneAmt * 1.99 << itemTwoAmt * 2.99 << itemThreeAmt * 3.99 << endl;
    // cout << totalPayment << endl;

    cout << "Item Receipt\n";
    cout << "======================\n";
    cout << "Item One\t#: " << itemOneAmt << endl;
    cout << "Item Two\t#: " << itemTwoAmt << endl;
    cout << "Item Three\t#: " << itemThreeAmt << endl;
    cout << "Item Four\t#: " << itemFourAmt << endl;
    cout << "----------------------\n";
    cout << "Total Items\t#: " << itemOneAmt + itemTwoAmt + itemThreeAmt + itemFourAmt << endl;
    cout << "Total\t\t$: " << ease::twoPrecision(totalPayment) << endl;
    cout << "======================\n";
}
