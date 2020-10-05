#include <iostream>
using namespace std;
class base01{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }
};

class base02{
    public:
    void greet(){
        cout<<"Hello gentelman!"<<endl;
    }
};
class derived: public base01, public base02{
    int a;
    public:
    void greet(){
        base02::greet();
    }
};

class b1{
    public:
    void say(){
        cout<<"Hello world"<<endl;
    };
};
class d1:public b1{
    int a;
    public:
    void say(){
        cout<<"Hello my beautiful people!"<<endl;
    };
};
int main(){
    // Ambiguity 01
    // base01 obj1;
    // base02 obj2;
    // obj1.greet();
    // obj2.greet();
    // derived obj3;
    // obj3.greet();

    // Ambiguity 02
    b1 b;
    b.say();
    d1 c;
    c.say();
    return 0;
};