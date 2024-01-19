#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a = "Hello World";
    // a.erase(4, 4);
    a.replace(6,0,"Nazmul ");
    a.insert(5, "Nazmul");
    cout << a;
    return 0;
}