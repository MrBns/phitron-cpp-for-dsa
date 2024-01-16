#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int value = n % 2 == 0 ? 0 : 1;

    if (value == 0)
    {
        cout << "Nazmul" << endl;
    }
    else if (value == 1)
    {
        cout << "Nazmul 2";
    }

    return 0;
}