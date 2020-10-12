#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    try{
        if (b!=0){
            cout<<"The result of division is: "<<a/b;
        }else{
            throw(4);
        }
    }catch(int i){
        cout<<"The value of dinominator is 0. Division cannot be done.";
    }


    return 0;
};