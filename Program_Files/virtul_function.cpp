#include <iostream>
using namespace std;
class baseClass{
    public:
    int var_base=10;
    virtual void display(){
        cout<<"1 Displaying base vairable: "<<var_base<<endl;
    }
    void displayMore(){
        cout<<"More is displayed."<<endl;
    }
};

class derivedClass: public baseClass{
    public:
    int var_derived=20;
    void display(){
        cout<<"2 Display base class variable: "<<var_base<<endl;
        cout<<"2 Display derived class variable: "<<var_derived<<endl;
    }
};
int main(){
    baseClass * base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;

    base_class_pointer= &obj_derived;
    base_class_pointer->display();
    base_class_pointer->displayMore();


    return 0;
};