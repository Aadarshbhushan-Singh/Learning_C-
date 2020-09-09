#include <iostream>
using namespace std;

class student{
    char regNo[10];
    char name[12];
    double cgpa;
    char branch[20];
    public:
    void getData(){
        cout<<"Enter the registeration number: ";
        cin>>regNo;
        cout<<"Enter the registeration name: ";
        cin>>name;
        cout<<"Enter the registeration cgpa: ";
        cin>>cgpa;
        cout<<"Enter the registeration branch: ";
        cin>>branch;                
    }
    void printData(){
        cout<<regNo<<endl<<name<<endl<<cgpa<<endl<<branch<<endl;
    }
};

// bool search(student *s, int n, const char *sregNo[10]){
//     for(int i=0; i<n; i++){
//         if (s[i].regNo==sregNo){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };
int main(){
    int num;
    cout<<"Enter the number of data: ";
    cin>>num;
    for (int i=0; i<num; i++){
        student s[i];
        s[i].getData();
    }

    return 0;
};