// Clayton Jensen
// Programming 1
// October 16, 2019
// Menu Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables for items
    float totalPayment;
    float itemOnePrice = 1.99, itemTwoPrice = 2.99, itemThreePrice = 3.99, itemFourPrice = 4.99;
    int itemOneAmt = 0, itemTwoAmt = 0, itemThreeAmt = 0, itemFourAmt = 0;

    // Set running flag to true
    bool isRunning = true;
    while (isRunning)
    {
        // Clear the screen on each menu print
        // ease::clear();
        string userChoice;
        cout << "1) Item One\t:: $" << itemOnePrice << endl;
        cout << "2) Item Two\t:: $" << itemTwoPrice << endl;
        cout << "3) Item Three\t:: $" << itemThreePrice << endl;
        cout << "4) Item Four\t:: $" << itemFourPrice << endl;
        cout << "Type 'quit' to exit...\n=================\nSelect: ";
        cin >> userChoice;

        // Detect user input & quit if necessary
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

    // Calculations
    totalPayment += (itemOneAmt * itemOnePrice);
    totalPayment += (itemTwoAmt * itemTwoPrice);
    totalPayment += (itemThreeAmt * itemThreePrice);
    totalPayment += (itemFourAmt * itemFourPrice);

    // Print the 'receipt'
    cout << "Receipt\n";
    cout << "============================================\n";
    cout << "Item One\t#: " << itemOneAmt << endl;
    cout << "Item Two\t#: " << itemTwoAmt << endl;
    cout << "Item Three\t#: " << itemThreeAmt << endl;
    cout << "Item Four\t#: " << itemFourAmt << endl;
    cout << "--------------------------------------------\n";
    cout << "Total Items\t#: " << itemOneAmt + itemTwoAmt + itemThreeAmt + itemFourAmt << endl;
    cout << "Total\t\t$: " << setprecision(2) << fixed << totalPayment << endl;
    cout << "============================================\n";
}
