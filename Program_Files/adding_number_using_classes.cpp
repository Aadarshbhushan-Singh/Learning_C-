#include <iostream>
#include <conio.h>
using namespace std;
class c2;

class c1{
    friend void addNumber(c1, c2);
    int data1;
    public:
    void setValue(int a){
        data1=a;
    };
};

class c2{
    friend void addNumber(c1, c2);
    int data2;
    public:
    void setValue(int b){
        data2=b;
    };
};

void addNumber(c1 o1, c2 o2){
    cout<<"The sum is: "<<(o1.data1+o2.data2);
};
int main(){
    c1 o1;
    c2 o2;
    o1.setValue(20);
    o2.setValue(30);
    addNumber(o1, o2);

    getch();
    return 0;
}