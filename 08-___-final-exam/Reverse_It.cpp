#include <iostream>
#include <string>
#include <utility>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sect;
    int id;
};

int main()
{

    int n;
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sect >> arr[i].id;
    }

    int i = 0;
    int j = n-1;
    while (i < j)
    {
        swap(arr[i].sect, arr[j].sect);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " "
             << arr[i].cls << " "
             << arr[i].sect << " "
             << arr[i].id << endl;
    }

    return 0;
}