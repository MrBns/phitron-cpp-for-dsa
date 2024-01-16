#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;

    Student(char name[100], int roll, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->cls = cls;
    }
};

Student *inputStudent()
{
    char name[100];
    int roll;
    int cls;
    cin >> name >> roll >> cls;
    return new Student(name, roll, cls);
}

int main()
{
    int n;
    cin >> n;
    Student *students[n];

    for (int i = 0; i < n; i++)
    {
        students[i] = inputStudent();
    }

    for (int i = 0; i < n; i++)
    {
        cout << students[i]->name << " Er Class:= " << students[i]->cls << " & Roll:= " << students[i]->roll << endl;
    }

    // delete[] students;

    return 0;
}