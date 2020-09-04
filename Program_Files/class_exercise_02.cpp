#include <iostream>
using namespace std;
class Employee{
    private:
        int a,b;
    public:
    int c, d, e;
    void printValue(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }
    void getValue(int a1, int b1){
        a=a1;
        b=b1;
    };    
};
int main(){
    Employee e1;
    e1.c=100;
    e1.d=200;
    e1.e=300;
    e1.getValue(5,4);
    e1.printValue();   
    return 0;
}