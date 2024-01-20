#include <iostream>
#include <string>
#include <limits.h>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(){};

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    int n;
    cin >> n;

    Person *arr = new Person[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].age;
    }

    Person *min = new Person("", INT_MAX);
    Person *max = new Person("", INT_MIN);

    for (int i = 0; i < n; i++)
    {
        if (min->age > arr[i].age)
        {
            *min = arr[i];
        }
        if (max->age < arr[i].age)
        {
            *max = arr[i];
        }
    }

    cout << "Smaller Person is " << min->name << endl;
    cout << "bigger Person is " << max->name << endl;

    return 0;
}
