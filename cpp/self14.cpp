#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    double balance;

public:

    BankAccount(double balance = 0)
    {
        this->balance = balance;
    }

    void deposit(double amount)
    {
        if(amount < 0)
        {
            throw amount;
        }

        balance = balance + amount;

        cout << "Amount deposited successfully" << endl;
    }

    void withdraw(double amount)
    {
        if(amount < 0)
        {
            throw amount;
        }

        if(amount > balance)
        {
            throw string("Insufficient balance");
        }

        balance = balance - amount;

        cout << "Amount withdrawn successfully" << endl;
    }

    void display()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b(5000);

    try
    {
        b.deposit(-100);
        b.withdraw(6000);
    }
    catch(double amount)
    {
        cout << "Invalid amount: " << amount << endl;
    }
    catch(string message)
    {
        cout << "Error: " << message << endl;
    }

    b.display();

    return 0;
}