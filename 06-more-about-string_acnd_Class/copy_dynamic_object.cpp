#include <iostream>
#include <string>

using namespace std;

int main()
{
    int *n = new int(10);
    int *m = new int(20);

    *n = 200;
    delete m;
    cout << *n << endl;
    return 0;
}