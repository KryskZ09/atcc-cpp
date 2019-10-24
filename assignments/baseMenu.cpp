// Clayton Jensen
// Programming 1
// October 16, 2019
// Menu Program

#include <iostream>
#include <iomanip>
using namespace std;

void printAmountQuestion()
{
    cout << "How many items do you want?\n#: ";
}

int main()
{
    // Declare variables for items
    float totalPayment;

    float itemOnePrice = 1.99,
          itemTwoPrice = 2.99,
          itemThreePrice = 3.99,
          itemFourPrice = 4.99,
          itemFivePrice = 5.99;

    int itemOneAmt = 0,
        itemTwoAmt = 0,
        itemThreeAmt = 0,
        itemFourAmt = 0,
        itemFiveAmt = 0;

    // Set running flag to true
    bool isRunning = true;
    while (isRunning)
    {
        string userChoice;
        cout << "1) Item One\t:: $" << itemOnePrice << endl;
        cout << "2) Item Two\t:: $" << itemTwoPrice << endl;
        cout << "3) Item Three\t:: $" << itemThreePrice << endl;
        cout << "4) Item Four\t:: $" << itemFourPrice << endl;
        cout << "5) Item Five\t:: $" << itemFivePrice << endl;
        cout << "Type 'quit' to exit...\n==================================\nSelect: ";
        cin >> userChoice;

        // Detect user input & quit if necessary
        if (userChoice == "quit")
        {
            isRunning = false;
        }
        else if (userChoice == "1")
        {
            printAmountQuestion();
            cin >> itemOneAmt;
        }
        else if (userChoice == "2")
        {
            printAmountQuestion();
            cin >> itemTwoAmt;
        }
        else if (userChoice == "3")
        {
            printAmountQuestion();
            cin >> itemThreeAmt;
        }
        else if (userChoice == "4")
        {
            printAmountQuestion();
            cin >> itemFourAmt;
        }
        else if (userChoice == "5")
        {
            printAmountQuestion();
            cin >> itemFiveAmt;
        }
        else
        {
            cout << "That item doesn't exist!\n";
        }
    }

    // Calculations
    totalPayment += (itemOneAmt * itemOnePrice);
    totalPayment += (itemTwoAmt * itemTwoPrice);
    totalPayment += (itemThreeAmt * itemThreePrice);
    totalPayment += (itemFourAmt * itemFourPrice);
    totalPayment += (itemFiveAmt * itemFivePrice);

    // Print the receipt
    cout << "Receipt\n";
    cout << "==================================\n";
    cout << "Item One\t#: " << itemOneAmt << endl;
    cout << "Item Two\t#: " << itemTwoAmt << endl;
    cout << "Item Three\t#: " << itemThreeAmt << endl;
    cout << "Item Four\t#: " << itemFourAmt << endl;
    cout << "Item Five\t#: " << itemFiveAmt << endl;
    cout << "----------------------------------\n";
    cout << "Total Items\t#: " << itemOneAmt + itemTwoAmt + itemThreeAmt + itemFourAmt + itemFourAmt << endl;
    cout << "Total Price\t$: " << setprecision(2) << fixed << totalPayment << endl;
    cout << "==================================\n";
}
