// Clayton Jensen
// Programming 1
// Novemeber 13, 2019
// Tic Tac Toe Game (Final Project)

// TODO: Computer Player
//     * Logic is still complicated, it is necessary to have it choose the best placement for a hard AI.
//     ? AI Difficulties? Would probably drive me I N S A N E...

// * DONE: Win Conditions
//       See notes detailing the patterns that win conditions have.
// SOLUTION:
//       Check the many solution patterns and if they all have the same character. If 9 moves are reached without a win then it's automatically a tie.

// * DONE: Placement Error Handling
//       Player is able to place on a spot they've already done so on and skip a turn.
// SOLUTION:
//       Check if the position has either a 'O' or 'X' and if it does end the game. A nasty solution, but it works.

// * DONE: Ternary
//       Some of the if statements could be refactored into ternary operations.
// SOLUTION:
//       The if statements that made sense to be ternary were rafactored into ternary.

#include <iostream>
using namespace std;

// Initialize 3x3 (9-space) board with NULL values.
char board[3][3];
int moveCount = 1;

// Reference to the drawBoard function.
void drawBoard();

// Clear the screen, draw the board, and add a newline.
void draw()
{
    system("clear");
    drawBoard();
    cout << '\n';
}

void winOutput(char player)
{
    draw();

    string out;

    // Color the player character.
    player == 'X' ? out = "Player \033[0;31mX\033[0m Has Won!" : out = "Player \033[0;34mO\033[0m Has Won!";

    cout << out << endl;

    exit(0);
}

// Check for a win in rows, columns, and diagonals.
// player {char} The current player.
void checkWin(char player)
{

    if (board[0][0] == board[1][0] && board[1][0] == board[2][0]) // Row 1, 2, 3, Column 1
    {
        winOutput(player);
    }
    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1]) // Row 1, 2, 3, Column 2
    {
        winOutput(player);
    }
    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2]) // Row 1, 2, 3, Column 3
    {
        winOutput(player);
    }
    else if (board[0][0] == board[0][1] && board[0][1] == board[0][2]) // Row 1, Column 1, 2, 3
    {
        winOutput(player);
    }
    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2]) // Row 2, Column 1, 2, 3
    {
        winOutput(player);
    }
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) // Row 3, Column 1, 2, 3
    {
        winOutput(player);
    }
    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2]) // Row 3, Column 1, 2, 3
    {
        winOutput(player);
    }
    else if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) // Diagonal: TL To BR
    {
        winOutput(player);
    }
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) // Diagonal: TR To BL
    {
        winOutput(player);
    }
    // If there are no more possible moves and there are no wins, then the game is a tie.
    else if (moveCount == 9)
    {
        draw();
        cout << "The game was a tie!\n";
        exit(0);
    }
}

// Get the character in the position provided.
// row {int} The row of the character.
// col {int} The column of the character.
// returns {char} The character in the position.
char getPos(int row, int col)
{
    return board[row][col];
}

// Set the chracter in the position provided based on the current player.
// row {int} The row to set the character in.
// col {int} The column to set the character in.
// input {char} The character to place in the [row][col].
void setPos(int row, int col, char input)
{
    if (getPos(row, col) == 'O' || getPos(row, col) == 'X')
    {
        cout << "An Error Has Occured...\n";
        exit(-1);
    }
    else
    {
        board[row][col] = input;
    }
}

// Loop through the board vector and set any NULL spaces to it's position number, then add barriers to the spaces.
// If the X is played, color it red. If the O is played, color it blue.
void drawBoard()
{
    for (int row = 0; row < 3; row++)
    {
        // Print the top of the board and any following rows.
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
                // If the position contains an X, then color it red.
                if (getPos(row, col) == 'X')
                {
                    cout << "| \e[1m\033[0;31m" << getPos(row, col) << "\033[0m\e[0m |";
                }
                // Else if the position contains an O, then color it blue.
                else if (getPos(row, col) == 'O')
                {
                    cout << "| \e[1m\033[0;34m" << getPos(row, col) << "\033[0m\e[0m |";
                }
                // Else the position is blank and do not color it.
                else
                {
                    cout << "| " << getPos(row, col) << " |";
                }
            }
        }
    }
    // Print the bottom of the board.
    cout << "\n|===+===+===|\n";
}

// Get the input of the current player.
// The player parameter colors the corresponding character in the output.
// player {char} The current player, either 'X' or 'O'.
// returns {int} The 1-9 position the player wants to place in.
int playerInput(char player)
{
    int playerPos;
    string out;

    player == 'X' ? out = "Player \033[0;31mX\033[0m Position: " : out = "Player \033[0;34m0\033[0m Position: ";
    cout << out;
    cin >> playerPos;

    if (cin.good())
    {
        return playerPos;
    }
    else
    {
        cout << "An error has occured...\n";
        exit(-1);
    }
}

// Call the draw() function, and then switch for the playerInput('X) output.
// After the placement, check for a win condition.
// player {char} The current player, either 'X' or 'O'.
void doTurn(char player)
{
    draw();

    switch (playerInput(player))
    {
    case 9:
        setPos(2, 2, player);
        break;
    case 8:
        setPos(2, 1, player);
        break;
    case 7:
        setPos(2, 0, player);
        break;
    case 6:
        setPos(1, 2, player);
        break;
    case 5:
        setPos(1, 1, player);
        break;
    case 4:
        setPos(1, 0, player);
        break;
    case 3:
        setPos(0, 2, player);
        break;
    case 2:
        setPos(0, 1, player);
        break;
    case 1:
        setPos(0, 0, player);
        break;
    default:
        cout << "An error has occured...\n";
        break;
    }
    checkWin(player);
    moveCount++;
}

// Indefinitely play the game until someone wins or tie, calling player X then player O.
int main()
{
    while (true)
    {
        doTurn('X');
        doTurn('O');
    }
}
