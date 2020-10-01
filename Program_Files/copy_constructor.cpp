#include <iostream>
using namespace std;
class Simple{
    int a, b, c;
    public:
    Simple(){
        a=0;
        b=0;
    }
    Simple(int x, int y){
        a=x;
        b=y;
    }
    //If no copy constructor is found, compiler supplies its own copy constructor.
    Simple (Simple &obj){
        cout<<"Copy constructor called: "<<endl;
        a=obj.a;
        b=obj.b;
    }
    void display(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }
};
int main(){
    Simple obj1, obj2, obj3(20,30), obj5;
    obj1.display();
    obj2.display();
    obj3.display();
    Simple obj4(obj2); //Copy constructor invoked.
    obj4.display();
    obj5=obj3; //Copy constructor not invoked.
    obj5.display();
    Simple obj6=obj3; //Copy constructor invoded because the object was made and decleared its value in same line
    obj6.display();
    
    return 0;
};