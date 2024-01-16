#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;

    // while (scanf("%d %d", &a,&b)===EOF)
    // {
    //     cout << a << b;
    // }


    //in C language we don't have to tell cin ==="EOF"
    while (cin >> a >> b)
    {
        cout << a << b;
    }

    return 0;
}