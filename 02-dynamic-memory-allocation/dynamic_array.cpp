#include <bits/stdc++.h>

using namespace std;

int *inputArr(int n)
{

    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(a + i);
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int *arr = inputArr(n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}