#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int rollno;
    double marks;
    public:
    Student():name("Aniket"),rollno(4),marks(83.33){}
    Student(string name,int rollno,double marks){
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;
    }
    void acceptRecord(){
         cout<<"Enter the name of the student is "<<" ";
         cin>>this->name;
        cout<<"Enter the rollno of the student is "<<" ";
          cin>>this->rollno;
        cout<<"Enter the marks of the student is "<<" ";
          cin>>this->marks;
          cout<<endl;
    }
    void displayRecord(){
        cout<<"the name of the student is "<<" "<<name<<endl;
        cout<<"the rollno of the student is "<<" "<<rollno<<endl;
        cout<<"the marks of the student is "<<" "<<marks<<endl;
    }
    double getmarks(){
        return this->marks;
    }

};

double highestmarks(Student *arr,int n){
    double high=arr[0].getmarks();
    for(int i=0; i<n; i++){
        if(arr[i].getmarks()> high){
            high=arr[i].getmarks();
        }
        
    }
    return high;

}
int main(){
    int num;
    cout<<"numbers of student you want to add"<<" ";
    cin>>num;
    Student *arr = new Student[num];
    for (int i=0; i<num; i++){
        arr[i].acceptRecord();
    }
    for (int i = 0; i < num; i++)
    {
        arr[i].displayRecord();
    }
    cout<<"highest marks is "<<" ";
   cout<< highestmarks(arr,num);
    delete[]arr;
    arr = NULL;
      
    
}