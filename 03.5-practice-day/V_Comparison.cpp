#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    switch (s)
    {
    case '>':
        if (a > b)
            cout << "Right";
        else
            cout << "Wrong";
        break;

    case '<':
        if (a < b)
            cout << "Right";
        else
            cout << "Wrong";
        break;

    case '=':
        if (a == b)
            cout << "Right";
        else
            cout << "Wrong";
        break;

    default:
        break;
    }

    return 0;
}