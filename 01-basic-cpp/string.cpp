#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
    char str[14];
    string string2;

    cin.getline(str, 14);
    string2 = string(str);

    cout << string2.length() << endl;
    cout << string2 << endl;

    vector<int> vec_ = {0, 1, 3};

    return 0;
}