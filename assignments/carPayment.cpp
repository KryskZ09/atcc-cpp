// Clayton Jensen
// Programming 1
// September 25, 2019
// Car Payment Calculator

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Set the outout to two decimal places.
    cout << fixed << showpoint;
    cout << setprecision(2);

    string
        firstName,
        lastName;

    int
        loanYears;

    float
        carPrice,
        moPayment;

    cout << "Welcome to the car payment calculator!" << endl;

    cout << "What is your first name?: ";
    cin >> firstName;

    cout << "What is your last name?: ";
    cin >> lastName;

    cout << "What is the price of the car?: $";
    cin >> carPrice;

    cout << "What is the loan period (years): ";
    cin >> loanYears;

    moPayment = carPrice / (12 * loanYears);

    cout << firstName << ' ' << lastName << ", your monthly payment is $" << moPayment << endl;
}