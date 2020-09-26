#include <iostream>
using namespace std;
class parent{
    public:
    int pchild; //pchild is parent child
};

class child:public parent{
    public:
    int cchild; //cchild is children child
};

int main(){
    child obj1;
    obj1.pchild=10;
    obj1.cchild=20;
    cout<<"Parent: "<<obj1.pchild<<endl;
    cout<<"Child: "<<obj1.cchild<<endl;


    return 0;
};  