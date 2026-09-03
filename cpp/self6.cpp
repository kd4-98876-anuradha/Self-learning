#include <iostream>
using namespace std;
class BankAccount{
    private:
    int accountNumber;
    string accountHolderName;
    double balance;

    public:
    BankAccount():accountNumber(0),accountHolderName("unkown"),balance(0.0){}
    BankAccount(int accountNumber,string accountHolderName,double balance ):accountNumber(accountNumber),accountHolderName(accountHolderName),balance(balance){}
    void withDraw(int money){
        if(money>=balance){
            cout<<"amount cant withdraw"<<endl;

        }
        else{
            cout<<"the amount is withDarw"<<" Rs "<<money<<endl;
            this->balance-=money;

        }
    }
    void deposit(int money){
        cout<<"the amount is deposite"<<" Rs "<<money<<endl;
        this->balance+=money;
    }
    void display(){
        cout<<"the  accountNumber "<<" "<<accountNumber<<endl;
        cout<<"the accountHolderName "<<" "<<accountHolderName<<endl;
        cout<<"the balance is "<<" "<< balance<<endl;
    }

};
int main()
{
    BankAccount b1;
    // BankAccount b1(123,"pandey",5000.0);
    // b1.deposit(500);
    b1.withDraw(200);
    b1.display();
    
    return 0;
}
