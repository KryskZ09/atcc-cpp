// Clayton Jensen
// Programming 1
// October 2nd, 2019
// Halloween Ascii

#include <iostream>
// #include "ease/of_use.h"
using namespace std;

int main()
{
    cout << " .-.\n"
            "(o o)\n"
            "| O \\\n"
            " \\   \\\n"
            "  `~~~'\n";

    cout << "Welcome to the Halloween Ascii Art Repository!\nAll art provided by https://asciiart.website, all rights reserved to creators of said art!\n"
         << endl;

    cout << "Press Enter To Continue...";
    cin.get();

    bool isRunning = true;
    while (isRunning)
    {
        string asciiSelection;
        cout << "Choose an ASCII Art:" << endl;
        cout << "Type 'QUIT' to exit the program!" << endl;
        cout << "[ Boo ] | [ Witch ] | [ Cauldron ] | QUIT\n~> ";
        cin >> asciiSelection;

        if (asciiSelection == "quit" || asciiSelection == "QUIT")
        {
            isRunning = false;
        }
        else if (asciiSelection == "boo")
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
        else if (asciiSelection == "witch")
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
        else if (asciiSelection == "cauldron")
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
