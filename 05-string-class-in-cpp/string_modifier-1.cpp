#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a = "hello";
    string b = "World";

    a.append(b);
    b.push_back('C');
    cout << a + " " + b << endl;

    cout << a.size() << endl;
    a.pop_back();
    cout << a.size() << endl;
    return 0;
}