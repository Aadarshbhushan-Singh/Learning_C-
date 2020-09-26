#include <iostream>
using namespace std;
/*Multilevel inheritance: In this type of inheritance, a derived class is created from another derived class.
    Class Base01;
    class Derived:access_mode Base01;
    class MultilevelDerived:access_mode Derived;
*/
class base01{
    public:
    base01(){
    cout<<"This is base 01,"<<endl;
    }
};

class child01:public base01{
    public:
    child01(){
        cout<<"This is child 01"<<endl;
    }
};

class child02:public child01{
    public:
    child02(){
        cout<<"This is child 02."<<endl;
    }

};

/*In this type of inheritance, more than one sub class is inherited from a single base class. 
i.e. more than one derived class is created from a single base class.
*/
//Hierarchical Inheritance
class base02{
    public:
    base02(){
        cout<<"This is base 02."<<endl;
    };
};

class child03:public base02{

};
class child04:public base02{

};
int main(){
    //Multilevel Inheritance
    child02 obj;

    //Hierarchical Inheritance
    child03 obj1;
    child04 obj2;
    return 0;
};