#include <iostream>
using namespace std;
/*Hybrid (Virtual) Inheritance: Hybrid Inheritance is implemented by combining more than one type of inheritance. For 
example: Combining Hierarchical inheritance and Multiple Inheritance.*/
class base01{
    public:
    base01(){
        cout<<"This is base 01"<<endl;
    };
};
class base02{
    public:
    base02(){
        cout<<"This is base 02."<<endl;
    };
};
class derived01:public base01, public base02{
    
};
class derived02:public base01{
    public:
    derived02(){
        cout<<"This is derived 01."<<endl;
    };
};
class derived03:public derived02{

};
class derived04:public derived02{

};

int main(){
    derived01 obj;
    derived03 obj1;
    derived04 obj2;
    return 0;
};