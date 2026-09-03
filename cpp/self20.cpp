#include <iostream>
#include <memory>
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
        cout << "Student display()" << endl;
    }
};

int main()
{
    // 1. unique_ptr - ownership transfer
    cout << "\n--- unique_ptr ---" << endl;

    unique_ptr<Student> p1(new Student);

    p1->display();

    unique_ptr<Student> p2;

    p2 = move(p1);

    if(p1.get() == NULL)
    {
        cout << "Ownership transferred from p1 to p2" << endl;
    }

    p2->display();


    // 2. shared_ptr - shared ownership
    cout << "\n--- shared_ptr ---" << endl;

    shared_ptr<Student> s1(new Student);

    shared_ptr<Student> s2 = s1;

    cout << "Reference count: " << s1.use_count() << endl;

    s1->display();
    s2->display();


    // 3. weak_ptr - non-owning reference
    cout << "\n--- weak_ptr ---" << endl;

    weak_ptr<Student> w = s1;

    cout << "Reference count: " << s1.use_count() << endl;

    if(!w.expired())
    {
        shared_ptr<Student> temp = w.lock();

        temp->display();
    }

    return 0;
}