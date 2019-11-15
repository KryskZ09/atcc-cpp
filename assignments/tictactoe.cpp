// Clayton Jensen
// Programming 1
// Novemeber 13, 2019
// Tic Tac Toe Game (Final Project)

// TODO: Win Conditions
//     ! See notes detailing the patterns that win conditions have.

// TODO: Proper Game System
//     * Users can choose to play a set of matches, i.e. 3 matches.

// TODO: Computer Player
//     * Logic is still complicated, it is necessary to have it choose the best placement for a hard AI.
//     ? AI Difficulties? Would probably drive me I N S A N E...

// TODO: Placement Error Handling
//     ! Player is able to place on a spot they've already done so on and skip a turn.

// TODO: System Independent Clear
//     ? Is it really necessary to be honest? (system("cls") vs. system("clear"))

// DONE: Ternary
//      Some of the if statements could be refactored into ternary operations.
// SOLUTION:
//      The if statements that made sense to be ternary were rafactored into ternary.

#include <iostream>
using namespace std;

// Initialize 3x3 (9-space) board with NULL values.
char board[3][3];

// Reference to the drawBoard function for other functions above it.
void drawBoard();

// Get the character in the position provided.
// row {int} The row of the character.
// col {int} The column of the character.
char getPos(int row, int col)
{
    return board[row][col];
}

// Set the chracter in the position provided based on the current player.
// row {int} The row to set the character in.
// col {int} The column to set the character in.
void setPos(int row, int col, char input)
{
    if (getPos(row, col) != 'O' && getPos(row, col) != 'X')
    {
        board[row][col] = input;
    }
}

// Clear the screen, draw the board, and add a newline.
void draw()
{
    system("clear");
    drawBoard();
    cout << '\n';
}

// Loop through the board vector and set any NULL spaces to it's position number, then add barriers to the spaces.
// If the X is played, color it red. If the O is player, color it blue.
void drawBoard()
{
    for (int row = 0; row < 3; row++)
    {
        cout << "\n|===+===+===|\n";

        for (int col = 0; col < 3; col++)
        {
            // Fill the board with numbers instead of NULL.
            if (!getPos(row, col))
            {
                // Adding the hex value of 0x30 (int: 48) to a number will make it an ascii version of the number.
                // Effectively, this is a type cast using hex from int to char.
                row == 0 ? setPos(row, col, (col + 1) + 0x30) : row == 1 ? setPos(row, col, (row + col + 3) + 0x30) : setPos(row, col, (row + col + 5) + 0x30);
            }

            if (col == 1)
            {
                if (getPos(row, col) == 'X')
                {
                    cout << " \e[1m\033[0;31m" << getPos(row, col) << "\033[0m\e[0m ";
                }
                else if (getPos(row, col) == 'O')
                {
                    cout << " \e[1m\033[0;34m" << getPos(row, col) << "\033[0m\e[0m ";
                }
                else
                {
                    cout << " " << getPos(row, col) << " ";
                }
            }
            else
            {

                if (getPos(row, col) == 'X')
                {
                    cout << "| \e[1m\033[0;31m" << getPos(row, col) << "\033[0m\e[0m |";
                }
                else if (getPos(row, col) == 'O')
                {
                    cout << "| \e[1m\033[0;34m" << getPos(row, col) << "\033[0m\e[0m |";
                }
                else
                {
                    cout << "| " << getPos(row, col) << " |";
                }
            }
        }
    }
    cout << "\n|===+===+===|\n";
}

// Get the input of the current player.
// The player parameter colors the corresponding character in the cout.
// player {char} The current player, either 'X' or 'O'.
int playerInput(char player)
{
    int playerPos;
    string out;

    player == 'X' ? out = "Player \033[0;31mX\033[0m Position: " : out = "Player \033[0;34m0\033[0m Position: ";
    cout << out;
    cin >> playerPos;

    return playerPos;
}

// Call the draw() function, and then switch for the playerInput('X') output.
void xTurn()
{
    draw();

    switch (playerInput('X'))
    {
    case 9:
        setPos(2, 2, 'X');
        break;
    case 8:
        setPos(2, 1, 'X');
        break;
    case 7:
        setPos(2, 0, 'X');
        break;
    case 6:
        setPos(1, 2, 'X');
        break;
    case 5:
        setPos(1, 1, 'X');
        break;
    case 4:
        setPos(1, 0, 'X');
        break;
    case 3:
        setPos(0, 2, 'X');
        break;
    case 2:
        setPos(0, 1, 'X');
        break;
    case 1:
        setPos(0, 0, 'X');
        break;
    default:
        cout << "An error has occured...\n";
        break;
    }
}

// Call the draw() function, and then switch for the playerInput('O') output.
void oTurn()
{
    draw();

    switch (playerInput('O'))
    {
    case 9:
        setPos(2, 2, 'O');
        break;
    case 8:
        setPos(2, 1, 'O');
        break;
    case 7:
        setPos(2, 0, 'O');
        break;
    case 6:
        setPos(1, 2, 'O');
        break;
    case 5:
        setPos(1, 1, 'O');
        break;
    case 4:
        setPos(1, 0, 'O');
        break;
    case 3:
        setPos(0, 2, 'O');
        break;
    case 2:
        setPos(0, 1, 'O');
        break;
    case 1:
        setPos(0, 0, 'O');
        break;
    default:
        cout << "An error has occured...\n";
        break;
    }
}

// Indefinitely play the game, calling player X then player O.
int main()
{
    while (true)
    {
        xTurn();
        oTurn();
    }
}
