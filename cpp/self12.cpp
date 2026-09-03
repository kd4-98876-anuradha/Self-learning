#include <iostream>
#include <string>
using namespace std;

class Product
{
protected:
    string title;
    double price;

public:

    virtual void accept()
    {
        cout << "Enter title: ";
        cin >> title;

        cout << "Enter price: ";
        cin >> price;
    }

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }

    virtual ~Product()
    {
    }
};

class Book : public Product
{
private:
    int pages;

public:

    void accept()
    {
        Product::accept();

        cout << "Enter pages: ";
        cin >> pages;
    }

    void display()
    {
        Product::display();

        cout << "Pages: " << pages << endl;
    }
};

class Tape : public Product
{
private:
    int playtime;

public:

    void accept()
    {
        Product::accept();

        cout << "Enter playtime: ";
        cin >> playtime;
    }

    void display()
    {
        Product::display();

        cout << "Playtime: " << playtime << " minutes" << endl;
    }
};

int main()
{
    Product **arr = new Product*[5];

    int choice;

    for(int i = 0; i < 5; i++)
    {
        cout << "\n1. Book, 2. Tape, Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                arr[i] = new Book;
                arr[i]->accept();
                break;

            case 2:
                arr[i] = new Tape;
                arr[i]->accept();
                break;

            default:
                cout << "Invalid choice" << endl;
                i--;
        }
    }

    cout << "\n----- Product Details -----" << endl;

    for(int i = 0; i < 5; i++)
    {
        arr[i]->display();
        cout << endl;
    }

    for(int i = 0; i < 5; i++)
    {
        delete arr[i];
    }

    delete [] arr;

    return 0;
}