#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    char line[100005];

    while (cin.getline(line, 100005))
    {
        int n = strlen(line);
        sort(line, line + n);

        for (int i = 0; i <n; i++)
        {
            if (line[i] != ' ')
            {
                cout << line[i];
            }
        }
        cout << endl;
    }

    return 0;
}