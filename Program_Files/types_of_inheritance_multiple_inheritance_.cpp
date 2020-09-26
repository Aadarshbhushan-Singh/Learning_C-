#include <iostream>
using namespace std;
/*
Multiple Inheritance: Multiple Inheritance is a feature of C++ where a class can inherit 
from more than one classes. i.e one sub class is inherited from more than one base classes.
*/

class BaseClass01{
    public:
    BaseClass01(){
        cout<<"This is base class 01."<<endl;
    }
};

class BaseClass02{
    public:
    BaseClass02(){
        cout<<"This is base class 02."<<endl;
    }
};

class childClass:public BaseClass01, public BaseClass02{

};
int main(){
    childClass obj;

    return 0;
};