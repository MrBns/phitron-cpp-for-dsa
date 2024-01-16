#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    delete[] a;

    int n2;
    cin >> n2;

    a = new int[n2];

    for (int i = 0; i < n2; i++)
    {
        if (i < n)
        {
            a[i] = b[i];
            continue;
        }
        cin >> a[i];
    }

    for (int i = 0; i < n2; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}