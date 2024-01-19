#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int count = 0;
    bool inside_word = false;

    for (char c : input)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
                count++;
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }

    cout << count;

    return 0;
}