#include <iostream>
using namespace std;

int main()
{
    // ? Logical (Comparison) Operators:
    /*
        * < Less Than
        * > Greater Than
        * <= Less/Equal To
        * >= Greater/Equal To
        * != Not Equal To
        * == Equal To
    */

    // ? Logical (Boolean) Operators:
    /*
        * ! Not
        * && And
        * || Or
   */

    // * --------------------------------- *
    // ! And Operator
    int x = 1, y = 2, z = 3;

    if (x <= y && x >= z)
    {
        cout << "X <= Y and X >= Z\n";
    }

    // * --------------------------------- *
    // ! Usage Example

    float carPrice = 51000;
    float intRate;

    if (carPrice > 50000)
    {
        intRate = 0.06; // 6% Interest
    }
    else
    {
        intRate = 0.01; // 1% Interest
    }

    cout << intRate << endl;

    // * --------------------------------- *
    // ! If, Else Group

    int a = 100;

    if (a < 20)
    {
        // if condition is true then print the following
        cout << "a is less than 20" << endl;
    }
    else
    {
        // if condition is false then print the following
        cout << "a is not less than 20" << endl;
    }

    // * --------------------------------- *
    // ! If, Else If, Else Grouping

    int b = 100;

    // check the boolean condition
    if (b == 10)
    {
        // if condition is true then print the following
        cout << "Value of a is 10\n";
    }
    else if (b == 20)
    {
        // if else if condition is true
        cout << "Value of a is 20\n";
    }
    else if (b == 30)
    {
        // if else if condition is true
        cout << "Value of a is 30\n";
    }
    else
    {
        // if none of the conditions are true
        cout << "Value of a is not matching\n";
    }

    // * --------------------------------- *

    return 0;
}
