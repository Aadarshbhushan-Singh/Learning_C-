#include <iostream>
using namespace std;
class complex{
    private:
    int real, imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    complex(int r, int i){
        real=r;
        imag=i;
    }
    void print_value(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
    complex operator +(complex c){
        complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
};
int main(){
    complex obj1(5,4);
    complex obj2(2,3);
    obj1.print_value();

    //calling object for operator overloading
    complex obj3;
    obj3=obj1+obj2; //This is same as obj3=obj1.add(obj2); obj2 is passed in obj1
    obj3.print_value();



    return 0;
};