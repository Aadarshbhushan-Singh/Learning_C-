#include <iostream>
using namespace std;
/*
Single Inheritance: In single inheritance, a class is allowed to inherit from only one class. i.e. one sub class is
inherited by one base class only.
*/
class BaseClass{
    public:
    BaseClass(){
        cout<<"Private member is accessed.";
    };
};

class ChildClass:public BaseClass{

};
int main(){
    ChildClass obj;

    return 0;
};