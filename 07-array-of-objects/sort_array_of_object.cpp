#include <iostream>
#include <string>

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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i].age > arr[j].age)
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i].name << " "
             << arr[i].age << endl;


    return 0;
}
