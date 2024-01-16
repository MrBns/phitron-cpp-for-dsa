#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double cgp;
};

int main()
{
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cin >> students[i].name >> students[i].roll >> students[i].cgp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i].name << " Er Roll = " << students[i].roll << " & CGPA is = " << students[i].cgp <<endl;
    }

    return 0;
}