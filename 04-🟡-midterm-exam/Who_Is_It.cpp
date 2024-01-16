#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section;
    int total_marks;
};

bool mark_cmp_func(Student *x, Student *y)
{
    return x->total_marks < y->total_marks;
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        Student *students = new Student[3];

        for (int i = 0; i < 3; i++)
        {
            Student *s = &students[i];
            cin >> s->id >> s->name >> s->section >> s->total_marks;
        }

        Student *max_marks_student = &students[0];

        for (int i = 0; i < 3; i++)
        {
            max_marks_student = max(max_marks_student, &students[i], mark_cmp_func);
        }
        cout << max_marks_student->id << " "
             << max_marks_student->name << " "
             << max_marks_student->section << " "
             << max_marks_student->total_marks << endl;
    }

    return 0;
}