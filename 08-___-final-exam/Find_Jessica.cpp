#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    string expected_word = "Jessica";
    getline(cin, s);

    stringstream ss(s);

    string word;
    bool is_found = false;
    while (ss >> word)
    {


        if (word == expected_word)
        {
            is_found = true;
            break;
            ;
        }
    }

    cout << (is_found ? "YES" : "NO");

    return 0;
}