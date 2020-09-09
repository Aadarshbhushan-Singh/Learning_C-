//The calculation part is not complete in this program.
#include <iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    void get();
    friend complex operator*(complex obj1, complex obj2);
    void show();
};
void complex::get(){
    cout<<"Real: ";
    cin>>a;
    cout<<"Imaginary: ";
    cin>>b;
}
void complex::show(){
    if (b>0){
        cout<<endl<<a<<"+"<<b<<"i";
    }
    else{
        cout<<endl<<a;
    }
};
complex operator *(complex obj1, complex obj2){
    int w, x, y, z;
    w=obj1.a;
    x=obj1.b;
    y=obj1.a;
    z=obj1.b;
    int v1=w*y;
    int v2=-1*x*y;
    int v3=w*z;
    int v4=x*y;
    complex value;
    value.a=v1+v2;
    value.b=v3+v4;
    return complex (value);
}
int main(){
    complex o1, o2, o;
    o1.get();
    o2.get();
    o=(o1,o2);
    o.show();



    return 0;
};