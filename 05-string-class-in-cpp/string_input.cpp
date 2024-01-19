#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    getchar();
    string input;
    getline(cin, input);

    cout << n << endl
         << input << endl;
    cout << input.length();
    return 0;
}