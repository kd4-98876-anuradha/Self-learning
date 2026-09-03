#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual void work() = 0;
};

class Student : public Person
{
private:
    int marks;

public:
    Student(string name, int age, int marks)
        : Person(name, age)
    {
        this->marks = marks;
    }

    void study()
    {
        cout << "Student is studying" << endl;
    }

    void work()
    {
        cout << "Student is doing academic work" << endl;
    }
};

class Teacher : public Person
{
private:
    double salary;

public:
    Teacher(string name, int age, double salary)
        : Person(name, age)
    {
        this->salary = salary;
    }

    void teach()
    {
        cout << "Teacher is teaching" << endl;
    }

    void work()
    {
        cout << "Teacher is doing teaching work" << endl;
    }
};

int main()
{
    Student s("Aniket", 21, 85);
    Teacher t("Rahul", 40, 50000);

    s.display();
    s.study();

    cout << endl;

    t.display();
    t.teach();

    cout << endl;

    Person *p;

    p = &s;
    p->work();

    p = &t;
    p->work();

    return 0;
}