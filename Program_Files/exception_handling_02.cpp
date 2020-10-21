#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    string name;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;
    cout<<"Enter the name: ";
    cin>>name;
    try{
        if (num2==0){
            throw 0;
        }else if(name.length()<3){
            throw 1;
        }else{
            cout<<"Remainder: "<<num1/num2<<endl;
            cout<<"Name: "<<name<<endl;
        }
    }catch(int i){
        if (i==0){
            cout<<"Cannot divide by zero!"<<endl;
        }else if (i==1){
            cout<<"The length of string is not sufficiet."<<endl;
        }
    }

    return 0;
};