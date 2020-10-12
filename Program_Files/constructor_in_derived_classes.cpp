#include <iostream>
using namespace std; 
/*
case1:
class A: public B{
    order of execution -> first B() then A()
};

case2:
class A: public B, public A{
    order of execution -> first B(), then C() then A()
};

case3:
class A: public B, virtual public C{
    order of execution -> first C(), then B() then A()    Virtual is given more priority.
};

*/

class base1{
    protected:
    int data1;
    public:
    base1(int i){
        data1=i;
        cout<<"Base 01 class constructor called: "<<endl;
    }
    void printDataBase1(){
        cout<<"The value of data 01 is: "<<data1<<endl;
    }
};

class base2{
    protected:
    int data2;
    public:
    base2(int i){
        data2=i;
        cout<<"Base 02 class constructor is called: "<<endl;
    }
    void printDataBase2(){
        cout<<"The value of data 02 is: "<<data2<<endl;
    }
};

class derived: public base1, public base2{
    protected:
    int derived1, derived2;
    public:
    derived(int a, int b, int c, int d): base1(a), base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called: "<<endl;
    }
    void printData(){
        cout<<"Derived 01: "<<derived1<<endl;
        cout<<"Derived 02: "<<derived2<<endl;

    }


};
int main(){
    derived obj1(1,2,3,4);
    obj1.printDataBase1();
    obj1.printDataBase2();
    obj1.printData();

    return 0;
};