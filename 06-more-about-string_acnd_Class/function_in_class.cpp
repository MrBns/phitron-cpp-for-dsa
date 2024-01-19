#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void hello()
    {
        cout << "Hello" << this->name << endl;
    }
};

int main()
{
    Person *rakib = new Person("Nazmul hassan", 30);
    rakib->hello();
    return 0;
}