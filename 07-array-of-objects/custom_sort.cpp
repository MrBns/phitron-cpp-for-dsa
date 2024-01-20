#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class FreqObj
{
public:
    char value;
    int count = 0;
};

bool cmp(FreqObj a, FreqObj b)
{
    return a.count <= b.count;
}

int main()
{
    string s;
    cin >> s;

    FreqObj f[26];

    for (int i = 0; i < 26; i++)
    {
        f[i].value = char('a' + i);
        f[i].count = 0;
    }

    for (char c : s)
    {
        f[c - 'a'].count++;
    }

    sort(f, f + 26, cmp);

    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < f[i].count; j++)
        {
            cout << f[i].value;
        }
    }

    return 0;
}