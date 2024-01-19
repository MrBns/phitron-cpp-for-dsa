#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int arr['Z' - 'A'+1] = {0};

        int n; 

        cin >>n;

        string input;
        input.resize(n);
        cin >> input;

        int count = 0;
        for (char c : input)
        {

            if (arr[c - 'A'] == 0)
            {

                arr[c - 'A'] += 2;
                count += 2;
            }
            else if (arr[c - 'A'] >= 1)
            {
                arr[c - 'A']++;
                count += 1;
            }
            // cout << c << "==" << arr[c - 'A'] << endl;
        }
        cout << count<<endl;;
    }

    return 0;
}