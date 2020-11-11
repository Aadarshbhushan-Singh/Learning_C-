#include <iostream>
using namespace std;
class classB;
class classA{
    int a;
    public:
    void setValue(){
        a=30;
    }
    friend int add(classA o1, classB o2);

};
class classB{
    int b;
    public:
    void setValue(){
        b=20;
    }
    friend int add(classA o1, classB o2);
   
};

int add(classA o1, classB o2){
    return (o1.a+o2.b);
}
int main(){
    classA o1;
    classB o2;
    o1.setValue();
    o2.setValue();
    cout<<"Sum is: "<<add(o1, o2);
    cout<<endl;
    return 0;
};