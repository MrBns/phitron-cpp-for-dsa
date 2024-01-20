#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Person
{
public:
    string name;
    int age;
    int gpa;

    Person(){};

    Person(string name, int age, int gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

bool cmp(Person a, Person b)
{
    if (a.gpa > b.gpa)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int n;
    cin >> n;

    Person *arr = new Person[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].age >> arr[i].gpa;
    }

    sort(arr, arr + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << " " << arr[i].gpa << endl;
    }

    return 0;
}
