#include <iostream>
using namespace std;
namespace college{
    class Student{
        private:
        int stdId;
        string stdName;
        public:
        Student():stdId(0),stdName("unkown"){}
        Student(int stdId,string stdName){
            this->stdId=stdId;
            this->stdName=stdName;
        }
        void setstdID(int stdId){
            this->stdId=stdId;
        }
        void setstdName(string stdName){
            this->stdName=stdName;
        }
        int getstdID(){
            this->stdId=stdId;
        }
        string getstdName(){
            this->stdName;
        }
        void Display(){
            cout<<"the name is "<<" "<<stdName<<endl;
            cout<<"the id is "<<" "<<stdId<<endl;
        }


    };
    class Teacher{
         private:
        int tId;
        string tName;
        public:
        Teacher():tId(0),tName("unkown"){}
        Teacher(int tId,string tName){
            this->tId=tId;
            this->tName=tName;
        }
        void settID(int tId){
            this->tId=tId;
        }
        void settName(string tName){
            this->tName=tName;
        }
        int gettID(){
            return this->tId=tId;
        }
        string gettName(){
            cout<<endl;
            return this->tName;
        }
        void Display(){
            cout<<endl;
            cout<<"the id is "<<" "<<tId<<endl;
            cout<<"the name is "<<" "<<tName<<endl;
        }

    };

}
int main()
{
    // using namespace college;
    college::Student std;
    std.setstdID(5);
    std.setstdName("rahukl");
    cout<<std.getstdID();
    cout<<std.getstdName();
    std.Display();

    // college::Teacher t1;
    // t1.settID(25);
    // t1.settName("pratik");
    // cout<<t1.gettID();
    // cout<<t1.gettName();
    // t1.Display();

    return 0;
}
