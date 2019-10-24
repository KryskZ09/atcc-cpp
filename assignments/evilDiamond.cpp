// Clayton Jensen
// Programming 1
// October 23rd, 2019
// Diamond From Triangle
// From code that creates a rightside-up triangle, create a rightside-down triangle to create a diamond.

#include <iostream>
using namespace std;

int main()
{
    int space = 15;

    // BEGIN TOP HALF
    for (int i = 0; i <= 10; i++)
    {
        // Print the spacing required
        // Once this loop is hit, it is fully ran until the exit condition is met.
        // Space decrements on each run, making the total space less than the previous line.
        for (int k = 0; k < space; k++)
        {
            cout << ' ';
        }

        // Print the amount of stars required for a single line
        // Once the spacing loop is exited, this loop is ran until the exit condition is met.
        // 2 * i-1 keeps the number of stars as an odd number.
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << '*';
        }

        // Decrement the spacing for the next iteration of the spacing for-loop.
        space--;

        // End the line
        cout << '\n';
    }
    // END TOP HALF

    // BEGIN BOTTOM HALF
    for (int i = 10; i >= 0; i--)
    {
        // Print the spacing required
        // Once this loop is hit, it is fully ran until the exit condition is met.
        // Space increments on each run, making the total space more than the previous line.
        for (int k = 0; k < space; k++)
        {
            cout << ' ';
        }

        // Print the amount of stars required for a single line
        // Once the spacing loop is exited, this loop is ran until the exit condition is met.
        // 2 * i + 1 keeps the number of stars an odd number but as an inversed form.
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << '*';
        }

        // Increment the spacing for the next iteration of the spacing for-loop.
        space++;

        // End the line
        cout << '\n';
    }
    // END BOTTOM HALF
}
