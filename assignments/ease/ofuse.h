#include <iostream>

namespace ease
{
void clear()
{
    std::cout << std::flush;
    system("clear");
}

std::string toLower(std::string input)
{
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}
} // namespace ease
