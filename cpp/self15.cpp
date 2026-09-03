#include <iostream>
#include <string>
using namespace std;

class InvalidMarksException
{
private:
    string message;

public:

    InvalidMarksException(string message)
    {
        this->message = message;
    }

    string getMessage()
    {
        return message;
    }
};

class Student
{
private:
    string name;
    int marks;

public:

    void setName(string name)
    {
        this->name = name;
    }

    void setMarks(int marks)
    {
        if(marks < 0)
        {
            throw InvalidMarksException("Marks cannot be negative");
        }

        this->marks = marks;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    try
    {
        s.setName("Aniket");

        s.setMarks(-10);

        s.display();
    }
    catch(InvalidMarksException e)
    {
        cout << "Exception: " << e.getMessage() << endl;
    }

    return 0;
}