#include <iostream>
using namespace std;
class CA{
    int a;
    int b;
    public:
    CA(){
        a=10;
        b=20;
    }
    CA(int p1, int p2){
        a=p1;
        b=p2;
    }
    void print(){
        cout<<"Values are: "<<a<<" "<<b<<endl;
    }
    CA operator-(){
        int c=-a;
        int d=-b;
        return CA(c,d);
    }
};
int main(){
    CA o1;
    CA o2(3,4);
    CA o3;
    o3=(-o1);
    o1.print();
    o2.print();
    o3.print();

    return 0;

};