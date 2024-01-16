#include <bits/stdc++.h>

using namespace std;

int main()
{

    char input;
    cin >> input;

    if (input >= 'a' && input <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (input >= 'A' && input <= 'Z')
    {

        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else
    {
        cout << "IS DIGIT";
    }

    return 0;
}