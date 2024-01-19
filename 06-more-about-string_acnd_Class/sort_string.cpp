#include <iostream>
#include <string>
#include <algorithm>
#include "namespace.cpp"

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    rakib::hello();
    sort(s.begin(), s.end(), greater<char>());
    cout << s << endl;
    return 0;
}