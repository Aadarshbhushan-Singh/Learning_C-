#include <iostream>
using namespace std;
struct details{
    char name[100];
    int age;
    double salary;
};

int main(){
    int n;
    cout<<"How many persons??"<<endl;
    cin>>n;
    details obj1[n];
    for (int i=0; i<n; i++){
        cout<<"Name: ";
        cin>>obj1[i].name;
        cout<<"Age: ";
        cin>>obj1[i].age;
        cout<<"Salary: ";
        cin>>obj1[i].salary;
    }

    cout<<"Enter which detail to view: "<<endl;
    int m;
    cin>>m;
    cout<<"Details are: "<<endl;
    cout<<"Name: ";
    cout<<obj1[m].name<<endl;
    cout<<"Age: ";
    cout<<obj1[m].age<<endl;
    cout<<"Salary: ";
    cout<<obj1[m].salary<<endl;

};