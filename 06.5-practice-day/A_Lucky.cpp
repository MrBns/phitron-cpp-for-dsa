#include <iostream>
#include <string>

using namespace std;

int char_to_num(char c)
{
    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else
    {
        return 0;
    }
}

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        string input;
        cin >> input;
        int left = char_to_num(input[0]) + char_to_num(input[1]) + char_to_num(input[2]);
        int right = char_to_num(input[3]) + char_to_num(input[4]) + char_to_num(input[5]);

        cout << (left == right ? "YES" : "NO") << endl;
    }

    return 0;
}