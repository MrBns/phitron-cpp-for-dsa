#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int *found_index = new int(input.find("EGYPT"));

    while (*found_index != -1)
    {
        input.replace(*found_index, 5, " ");
        *found_index = input.find("EGYPT");

    }

    cout << input << endl;

    return 0;
}