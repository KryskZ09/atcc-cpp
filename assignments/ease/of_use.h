// Made By Clayton Jensen
// First Block

#include <iostream>

namespace ease
{

char getOsName()
{
#ifdef _WIN32 // WINDOWS x32 -> DOS
    return 'w';
#elif _WIN64                                         // WINDOWS x64 -> DOS
    return 'w';
#elif __APPLE__ || __MACH__                          // MAC -> Bash
    return 'm';
#elif __linux__ || __FreeBSD__ || __unix || __unix__ // LINUX -> Bash
    return 'u';
#else
    return '?';
#endif
}

// Clear the terminal screen
void clear()
{
    std::cout << std::flush; // Flush the output of any unwanted content
    char osType = getOsName();
    if (osType == 'w')
    {
        system("cls");
    }
    else
    {
        system("clear");
    }
}

std::string toLower(std::string input)
{
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}

} // namespace ease
