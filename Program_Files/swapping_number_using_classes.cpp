#include <iostream>
using namespace std;
class c2;
class c1;
void displayValue(c1 o1, c2 o2);
class c1{
    friend void swap(c1 &o1, c2 &o2);
    friend void displayValue(c1 o1, c2 o2);
    int data1;
    public:
    void setValue(int a){
        data1=a;
    }
};

class c2{
    friend void swap(c1 &o1, c2 &o2);
    friend void displayValue(c1 o1, c2 o2);
    int data2;
    public:
    void setValue(int b){
        data2=b;
    }
};

void swap(c1 &o1, c2 &o2){
    int temp;
    temp=o1.data1;
    o1.data1=o2.data2;
    o2.data2=temp;
};

void displayValue(c1 o1, c2 o2){
    cout<<o1.data1<<" "<<o2.data2<<endl;
};
int main(){
    c1 o1;
    c2 o2;
    o1.setValue(34);
    o2.setValue(90);
    cout<<"Not swapped: ";
    displayValue(o1, o2);
    swap(o1, o2);
    cout<<"Swapped: ";
    displayValue(o1, o2);

    return 0;
};