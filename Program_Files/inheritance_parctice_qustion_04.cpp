#include <iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    int x;
    public:
    void setValue(int v){
        x=v;
    }
};

class B: private A{
    public:
    void printValue(){
        setValue(10);
        cout<<"The value of x is: "<<x;
    }
};

int main(){
    B objB;
    objB.printValue();

    return 0;
};