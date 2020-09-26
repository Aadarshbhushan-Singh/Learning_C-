#include <iostream>
using namespace std;
class number{
    private:
    int a, b;
    public: 
    number(int x, int y=10){
        a=x;
        b=y;
    }
    void printNumber(){
        cout<<a<<" "<<b<<endl;
    }
};


int main(){
    number n1(4,5);
    n1.printNumber();
    number n2(20);
    n2.printNumber();
    
    cout<<endl;
    return 0;
};