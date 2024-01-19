// #include <iostream>
// #include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    std::getchar();
    string input;
    getline(cin, input);

    stringstream ss(input);

    string word;

    cout << ss.get() <<endl;

    while (ss >> word)
    {
        cout << word << endl;
    }


    return 0;
}