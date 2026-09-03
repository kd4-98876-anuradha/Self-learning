#include <iostream>
using namespace std;
class Laptop{
    private:
    int brandId;
    int price;
    public:
    Laptop(){
        cout<<"Laptop Constructor Called"<<endl;
        brandId=1;
        price=50000;
    }
    // Laptop(int brandId,int price){
    //     cout<<"Laptop Constructor Called";
    //     this->brandId=brandId;
    //     this->price=price;
    // }
    ~Laptop(){
        cout<<"Laptop distructor Called";
    }
    void display(){
        cout<<"the barnd id is "<<brandId<<endl;
        cout<<"the brand price is "<<price<<endl;
    }




};
int main(){
    Laptop l1;
    l1.display();
    // l1.~Laptop();


}