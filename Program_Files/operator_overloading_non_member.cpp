
#include<iostream>
using namespace std;
class CA{
    int a;
    int b;
    public:
        CA(){
            a=10;b=20;
        }
        CA(int p1,int p2){
            a=p1;
            b=p2;
        }
        void print(){
            cout<<"Values are "<<a<<" "<<b<<endl;
        }
        friend CA operator-(CA obj);
        CA operator+(CA rightoper){//member func-overloading binary operator
            CA temp;
            temp.a=a+rightoper.a;
            temp.b=b+rightoper.b;
            return temp;
        }   
};
//non-member funcion - overlaod unary operator -
CA operator-(CA obj){
    CA temp;
    temp.a=-obj.a;
    temp.b=-obj.b;
    return temp;
}
main(){
    CA o1;//10,20
    CA o2(3,4);
    CA o3;
    o3=(-o1);//-10,-20
    o1.print();//10,20
    o2.print();//3,4
    o3.print();//-10,-20
    CA o4;
    o4=(o1+o2);
    o4.print();//13,24
}

//2. overload unary operator - non member function

