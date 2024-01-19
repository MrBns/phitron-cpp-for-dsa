#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    sort(s.begin(), s.end());

    for (char c : s)
    {
        if (c != ' ')
            cout << c;
    }
    return 0;
}