// Clayton Jensen
// Programmming 1
// September 18, 2019
// Mathematical Program

#include <iostream>
using namespace std;

int main()
{
    // Declare Variables
    // Inheritance Bypass
    float fNumOne,
          fNumTwo,
          fSum,
          fDiff,
          fProd,
          fQuot;

    cout << "Number One: ";
    cin >> fNumOne;

    cout << "Number Two: ";
    cin >> fNumTwo;

    fSum  = fNumOne + fNumTwo;
    fDiff = fNumOne - fNumTwo;
    fProd = fNumOne * fNumTwo;
    fQuot = fNumOne / fNumTwo;

    cout << "Sum of ("        << fNumOne << " + " << fNumTwo << ") is " <<  fSum << '.' << endl;
    cout << "Difference of (" << fNumOne << " - " << fNumTwo << ") is " << fDiff << '.' << endl;
    cout << "Product of ("    << fNumOne << " * " << fNumTwo << ") is " << fProd << '.' << endl;
    cout << "Quotient of ("   << fNumOne << " / " << fNumTwo << ") is " << fQuot << '.' << endl;

    return 0;
}