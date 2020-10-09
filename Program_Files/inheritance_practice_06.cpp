#include <iostream>
using namespace std;
class A{
    public:
    int a;
    void get_a(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }
};

class B{
    public:
    int b;
    void get_b(){
        cout<<"Enter the value of b: ";
        cin>>b;
    }
};

class print_Value: public A, public B{
    public:
    print_Value(){
        get_a();
        get_b();
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }

};

int main(){
    int n=3;
    print_Value obj[5];
    for(int i=0; i<n; i++){
        obj[i];
    }
    return 0;
};  
