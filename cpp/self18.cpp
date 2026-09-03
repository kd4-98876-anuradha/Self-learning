#include <iostream>
using namespace std;

template <class T>
class Array
{
private:
    T *arr;
    int size;

public:

    Array(int size)
    {
        this->size = size;
        arr = new T[size];
    }

    // Copy constructor
    Array(const Array &a)
    {
        size = a.size;

        arr = new T[size];

        for(int i = 0; i < size; i++)
        {
            arr[i] = a.arr[i];
        }
    }

    // Assignment operator
    Array& operator=(const Array &a)
    {
        if(this != &a)
        {
            delete [] arr;

            size = a.size;
            arr = new T[size];

            for(int i = 0; i < size; i++)
            {
                arr[i] = a.arr[i];
            }
        }

        return *this;
    }

    T& operator[](int index)
    {
        return arr[index];
    }

    int getSize()
    {
        return size;
    }

    void display()
    {
        for(int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    ~Array()
    {
        delete [] arr;
    }
};

int main()
{
    Array<int> a(5);

    for(int i = 0; i < a.getSize(); i++)
    {
        a[i] = (i + 1) * 10;
    }

    cout << "Array: ";
    a.display();

    Array<int> b = a;

    cout << "Copied Array: ";
    b.display();

    return 0;
}