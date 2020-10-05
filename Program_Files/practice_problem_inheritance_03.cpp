#include <iostream>
using namespace std;
class student{
    private:
    int rollNo;
    char name[30];
    public:
    void getDetails(){
        cout<<"Enter the roll No: ";
        cin>>rollNo;
        cout<<"Enter the name: ";
        cin>>name;
    }
    void printDetails(){
        cout<<"Details of Students"<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Name of student: "<<name<<endl;
    }
};

class getData: public student{
    public:
    int maths, physics, chemistry;
    int total;
    void getDataMarks(){
        cout<<"Enter the marks of maths: ";
        cin>>maths;
        cout<<"Enther the marks of physics: ";
        cin>>physics;
        cout<<"Enter the marks of chemistry: ";
        cin>>chemistry;
    }
    void printData(){
        cout<<"Maths: "<<maths<<endl;
        cout<<"Physics: "<<physics<<endl;
        cout<<"Chemistry: "<<chemistry<<endl;
    }
    void displayTotal(){
    total=maths+physics+chemistry;
    cout<<"Total marks is: "<<total<<endl;
    }  
};
int main(){
    getData std[100];
    int num;
    cout<<"Enter the number of students: ";
    cin>>num;
    for (int i=0; i<num; i++){
        std[i].getDetails();
        std[i].getDataMarks();

    }
    for (int i=0; i<num; i++){
        std[i].printDetails();
        std[i].printData();

    }
    return 0;
};