#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};

    for (char c : s)
    {
        frq[c - 'a']++;
    }

    for (char i = 'z'; i >= 'a'; i--)
    {
        for (int j = frq[i - 'a'] - 1; j >= 0; j--)
        {
            cout << i;
        }
    }

    return 0;
}