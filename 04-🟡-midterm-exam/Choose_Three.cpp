#include <iostream>
#include <string>

using namespace std;

bool is_sum_exist(int n, int sum)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isExist = false;

    if (n < 3)
        return isExist = false;

    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    return isExist = true;
                }
            }

        }
    }
    delete[] arr;
    return isExist;
}

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n, sum;
        cin >> n >> sum;
        bool answer = is_sum_exist(n, sum);
        cout << (answer ? "YES" : "NO") << endl;
    }

    return 0;
}