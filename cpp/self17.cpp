#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int marks;

public:

    void accept()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    void save()
    {
        ofstream fout("student.txt");

        fout << rollNo << endl;
        fout << name << endl;
        fout << marks << endl;

        fout.close();
    }

    void load()
    {
        ifstream fin("student.txt");

        fin >> rollNo;
        fin >> name;
        fin >> marks;

        fin.close();
    }
};

int main()
{
    Student s1, s2;

    cout << "Enter Student Details:" << endl;
    s1.accept();

    s1.save();

    cout << "\nStudent loaded from file:" << endl;

    s2.load();
    s2.display();

    return 0;
}