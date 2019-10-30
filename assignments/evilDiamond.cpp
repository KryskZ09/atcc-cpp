// Clayton Jensen
// Programming 1
// October 23rd, 2019
// Diamond From Triangle
// From code that creates a triangle, edit it to flip the output and make a diamond.

#include <iostream>
using namespace std;

int main()
{
    int totalSpace = 30;

    // BEGIN TOP HALF
    for (int currentLine = 0; currentLine <= 10; currentLine++)
    {
        // Print the spacing required for the current line:
        // Once this loop is hit, it is fully ran until the exit condition is met.
        // totalSpace decrements on each line, making totalSpace less than the previous line.
        // currentSpace increments on each space character printed until it meets totalSpace.
        for (int currentSpace = 0; currentSpace < totalSpace; currentSpace++)
        {
            cout << ' ';
        }

        // Print the characters required for the current line:
        // Once the spacing loop is exited, this loop is ran until the exit condition is met.
        // 2 * currentLine allows the ability to print the number of characters per line
        // -1 removes a character from the end of the line
        for (int currentChar = 0; currentChar < 2 * currentLine - 1; currentChar++)
        {
            cout << '#';
        }

        // Decrement the spacing for the next iteration of the spacing for-loop.
        totalSpace--;

        // End the line
        cout << '\n';
    }
    // END TOP HALF

    // BEGIN BOTTOM HALF
    for (int currentLine = 10; currentLine >= 0; currentLine--)
    {
        // Print the spacing required for the current line:
        // Once this loop is hit, it is fully ran until the exit condition is met.
        // totalSpace increments on each run, making the total totalSpace more than the previous line.
        for (int currentSpace = 0; currentSpace < totalSpace; currentSpace++)
        {
            cout << ' ';
        }

        // Print the characters required for the current line:
        // Once the spacing loop is exited, this loop is ran until the exit condition is met.
        // 2 * currentLine allows the ability to print the number of characters per line
        // +1 adds an extra character to the end of each line, this paired with the -1 from the top half fix the alignment issues.
        for (int currentChar = 0; currentChar < 2 * currentLine + 1; currentChar++)
        {
            cout << '#';
        }

        // Increment the spacing for the next iteration of the spacing for-loop.
        totalSpace++;

        // End the line
        cout << '\n';
    }
    // END BOTTOM HALF
}
