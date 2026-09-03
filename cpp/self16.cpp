#include <iostream>
using namespace std;

class Student
{
public:

    Student()
    {
        cout << "Student created" << endl;
    }

    ~Student()
    {
        cout << "Student destroyed" << endl;
    }

    void display()
    {
        cout << "Student display" << endl;

        // Suppose exception occurs here
        // throw 10;
    }
};

class SmartPointer
{
private:
    Student *ptr;

public:

    SmartPointer(Student *ptr)
    {
        this->ptr = ptr;
    }

    ~SmartPointer()
    {
        delete ptr;
    }

    Student* operator->()
    {
        return ptr;
    }
};

int main()
{
    try
    {
        SmartPointer s(new Student);

        s->display();

        // No need to write delete
    }
    catch(...)
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}