#include <iostream>
#include <algorithm>
using namespace std;

string toLower(string input)
{
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    return input;
}

int main()
{
    string str;
    cin >> str;

    cout << toLower(str) << endl;
    
    return 0;
}
