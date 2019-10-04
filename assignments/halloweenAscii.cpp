
#include <iostream>
#include <cctype>
#include <algorithm>
#include <stdlib.h>
using namespace std;

void clear()
{
    cout << flush;
    system("clear");
}

string toLower(string input)
{
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}

int main()
{

    cout << " .-.\n"
            "(o o)\n"
            "| O \\\n"
            " \\   \\\n"
            "  `~~~'\n";
    
    cout << "Welcome to the Halloween Ascii Art Repository!\nAll art provided by https://asciiart.website, all rights reserved to creators of said art!\n" << endl;

    bool isRunning = true;
    while (isRunning)
    {
        string asciiSelection;
        cout << "Choose an ASCII Art:" << endl;
        cout << "Type 'QUIT' to exit the program!" << endl;
        cout << "[ Boo ] | [ Witch ] | [ Cauldron ] | QUIT\n~> ";
        cin >> asciiSelection;
        asciiSelection = toLower(asciiSelection);
        
        clear();

        if (asciiSelection == "quit")
        {
            isRunning = false;
            clear();
        }

        if (asciiSelection == "boo")
        {
            cout << "_______________                _________                 _________\n"
                    "|               `-_          .-'   ``-_  `-.           .-'   ``-_  `-.\n"
                    "|   __________     `\\      .'    ___   `-.  `.       .'    ___   `-.  `.\n"
                    "|   |         `-,    )    /    /'  /\\     \\   \\     /    /'  /\\     \\   \\\n"
                    "|   |           |    |   |   ,'   /  `\\    |   |   |   ,'   /  `\\    |   |\n"
                    "|   |_________.-'    |   |   |   |     |   |   |   |   |   |     |   |   |\n"
                    "|                  _/    |   |   |     |   |   |   |   |   |     |   |   |\n"
                    "|    _________     `\\    |   |   |     |   |   |   |   |   |     |   |   |\n"
                    "|   |         `-.    |   |   |   |     |   |   |   |   |   |     |   |   |\n"
                    "|   |           |    |   |   |    \\   /   ,'   |   |   |    \\   /   ,'   |\n"
                    "|   |        _,-'    )    \\   \\    `\\/  _/    /     \\   \\    `\\/  _/    /\n"
                    "|   ~~~~~~~~~      _/'     `.  `-_   ```    .'       `.  `-_   ```    .'\n"
                    "|              _.-'          `-_  `-,_   ,-'           `-_  `-,_   ,-'\n"
                    " ~~~~~~~~~~~~~~     Normand     ~~~~~~~~~     Veilleux    ~~~~~~~~~\n"
                    "\n\n\n";
        }

        if (asciiSelection == "witch")
        {
            cout << "                     Double, double\n"
                    "                     Toil and trouble\n"
                    "   (       \"     )   Fire burn and\n"
                    "    ( _  *           Cauldron bubble\n"
                    "       * (     /      \\    ___\n"
                    "          \"     \"        _/ /\n"
                    "        (   *  )    ___/   |\n"
                    "          )   \"     _ o)'-./__\n"
                    "          *  _ )    (_, . $$$\n"
                    "          (  )   __ __ 7_ $$$$\n"
                    "           ( :  { _)  '---  $\\\n"
                    "      ______'___//__\\   ____, \\\n"
                    "       )           ( \\_/ _____\\_\n"
                    "     .'             \\   \\------''.\n"
                    "     |='           '=|  |         )\n"
                    "     |               |  |  .    _/\n"
                    "      \\    (. ) ,   /  /__I_____\\\n"
                    "  snd  '._/_)_(\\__.'   (__,(__,_]\n"
                    "      @---()_.'---@\n"
                    "\n\n\n";
        }

        if (asciiSelection == "cauldron")
        {
            cout << "             (\n"
                    "           )  )\n"
                    "         _(______\n"
                    "        (________)\n"
                    "         )      (\n"
                    "        /        \\\n"
                    "    ___|          |___\n"
                    "   ()__\\___ _   __/__()\n"
                    "       .`/``||``\\`.\n"
                    "jgs   ()/   ()   \\()\n"
                    "\n\n\n";
        }
    }

    cout << "I hope you enjoyed the art you chose! Come back soon!" << endl;

    return 0;
}
