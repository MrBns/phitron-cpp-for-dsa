#include <iostream>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sect;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    if ((a.eng_marks + a.math_marks) > (b.eng_marks + b.math_marks))
    {
        return true;
    }
    else if ((a.eng_marks + a.math_marks) < (b.eng_marks + b.math_marks))
    {
        return false;
    }
    else
    {
        return a.id < b.id;
    }
}

int main()
{

    int n;
    cin >> n;

    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sect >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " "
             << arr[i].cls << " "
             << arr[i].sect << " "
             << arr[i].id << " "
             << arr[i].math_marks << " "
             << arr[i].eng_marks << endl;
    }

    return 0;
}