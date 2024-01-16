#include <bits/stdc++.h>

using namespace std;

int *fun()
{
    int *a = new int(100);

    cout << "fun : " << a << endl;
    return a;
}

int main()
{
    int *p = fun();

    cout << "main: " << *p << endl;
    return 0;
}