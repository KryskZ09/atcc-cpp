// Clayton Jensen
// Programming 1
// Novemeber 13, 2019 (ORIGINAL) --> November 30, 2019 (REWRITE)

#include <iostream>

int MoveCount = 1;

class Board
{
public:
    char board[3][3];
    void Draw()
    {
        for (int row = 0; row < 3; ++row)
        {
            std::cout << "\n|===+===+===|\n";

            for (int col = 0; col < 3; ++col)
            {
                if (GetChar(row, col) != 'X' && GetChar(row, col) != 'O')
                {
                    row == 0 ? this->SetChar(row, col, (row + col + 1) + 0x30) : row == 1 ? this->SetChar(row, col, (row + col + 3) + 0x30) : this->SetChar(row, col, (row + col + 5) + 0x30);
                }

                if (col == 1)
                {
                    if (this->GetChar(row, col) == 'X')
                    {
                        std::cout << " \e[1m\033[0;31m" << 'X' << "\033[0m\e[0m ";
                    }
                    else if (this->GetChar(row, col) == 'O')
                    {
                        std::cout << " \e[1m\033[0;34m" << 'O' << "\033[0m\e[0m ";
                    }
                    else
                    {
                        std::cout << " " << this->GetChar(row, col) << " ";
                    }
                }
                else
                {
                    if (this->GetChar(row, col) == 'X')
                    {
                        std::cout << "| \e[1m\033[0;31m" << 'X' << "\033[0m\e[0m |";
                    }
                    else if (this->GetChar(row, col) == 'O')
                    {
                        std::cout << "| \e[1m\033[0;34m" << 'O' << "\033[0m\e[0m |";
                    }
                    else
                    {
                        std::cout << "| " << this->GetChar(row, col) << " |";
                    }
                }
            }
        }

        std::cout << "\n|===+===+===|\n";
    }

    char GetChar(int row, int col)
    {
        return this->board[row][col];
    }

    void SetChar(int row, int col, char input)
    {
        this->board[row][col] = input;
    }
};

class Player
{
private:
    char symbol;

public:
    // Player Constructor
    Player(char symbol) { this->symbol = symbol; }

    void WinOutput(Board &board)
    {
        board.Draw(); // Print the board for a final time
        std::string out;
        this->symbol == 'X' ? out = "Player \033[0;31mX\033[0m Has Won!\n" : out = "Player \033[0;34mO\033[0m Has Won!\n";

        std::cout << out;
        exit(0);
    }

    void DoTurn(Board &board)
    {
        int PlayerPos;
        std::string out;

        this->symbol == 'X' ? out = "Player \033[0;31mX\033[0m Position: " : out = "Player \033[0;34mO\033[0m Position: ";
        std::cout << out;
        std::cin >> PlayerPos;

        if (!std::cin.good())
        {
            std::cout << "An Error Has Occurred\n";
            exit(-1);
        }

        switch (PlayerPos)
        {
        case 9:
            board.SetChar(2, 2, this->symbol);
            break;
        case 8:
            board.SetChar(2, 1, this->symbol);
            break;
        case 7:
            board.SetChar(2, 0, this->symbol);
            break;
        case 6:
            board.SetChar(1, 2, this->symbol);
            break;
        case 5:
            board.SetChar(1, 1, this->symbol);
            break;
        case 4:
            board.SetChar(1, 0, this->symbol);
            break;
        case 3:
            board.SetChar(0, 2, this->symbol);
            break;
        case 2:
            board.SetChar(0, 1, this->symbol);
            break;
        case 1:
            board.SetChar(0, 0, this->symbol);
            break;
        }

        if (board.GetChar(0, 0) == board.GetChar(1, 0) && board.GetChar(1, 0) == board.GetChar(2, 0))
        {
            this->WinOutput(board);
        }
        else if (board.GetChar(0, 1) == board.GetChar(1, 1) && board.GetChar(1, 1) == board.GetChar(2, 1))
        {
            this->WinOutput(board);
        }
        else if (board.GetChar(0, 2) == board.GetChar(1, 2) && board.GetChar(1, 2) == board.GetChar(2, 2))
        {
            this->WinOutput(board);
        }
        else if (board.GetChar(0, 0) == board.GetChar(0, 1) && board.GetChar(0, 1) == board.GetChar(0, 2))
        {
            this->WinOutput(board);
        }
        else if (board.GetChar(1, 0) == board.GetChar(1, 1) && board.GetChar(1, 1) == board.GetChar(1, 2))
        {
            this->WinOutput(board);
        }
        else if (board.GetChar(2, 0) == board.GetChar(2, 1) && board.GetChar(2, 1) == board.GetChar(2, 2))
        {
            this->WinOutput(board);
        }
        else if (board.GetChar(0, 0) == board.GetChar(1, 1) && board.GetChar(1, 1) == board.GetChar(2, 2))
        {
            this->WinOutput(board);
        }
        else if (board.GetChar(0, 2) == board.GetChar(1, 1) && board.GetChar(1, 1) == board.GetChar(2, 0))
        {
            this->WinOutput(board);
        }
        else if (MoveCount == 9)
        {
            board.Draw();
            std::cout << "The Game Was A Cat!\n";
            exit(0);
        }

        ++MoveCount;
    }
};

int main()
{
    Player X('X');
    Player O('O');
    Board board;

    while (true)
    {
        board.Draw();
        X.DoTurn(board);

        board.Draw();
        O.DoTurn(board);
    }
}
