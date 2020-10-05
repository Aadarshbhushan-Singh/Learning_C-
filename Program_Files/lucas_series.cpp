#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    a=2;
    b=1;
    int n;
    cout<<"Enter the number for which the series will run: ";
    cin>>n;
    if (n<0){
        cout<<"Invalid Number!";
    }else if(n==1){
        cout<<a<<endl;
    }else if(n==2){
        cout<<a<<endl<<b<<endl;
    }else{
        cout<<a<<endl<<b<<endl;
    for (int i=0; i<n-1; i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    }
    


    return 0;
};