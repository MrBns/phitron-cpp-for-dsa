#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "My CodeName is MR. Binary Sniper";

    cout << s.capacity() << endl;
    cout << s.length() << endl;
    cout << s.max_size() << endl;

    cout << "clearing" << endl;
    // clearing ;

    s.clear();

    cout << s.size() << endl;

    s = "Nazmul";

    cout << s <<endl;
    cout << s.size() <<endl;
    s.resize(4);
    cout << s <<endl;
    s.resize(8,'x');
    cout << s<<endl;
    return 0;
}