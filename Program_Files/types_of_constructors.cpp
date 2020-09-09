#include <iostream>
using namespace std;

//Parameterized constructor
class complex{
    int a, b;
    public:
    complex(int, int); //Argument so paramaterized.
    void  printNumber(){
        cout<<"The value of complex number is: "<<a<<"+"<<"i"<<b<<endl;
    };
};
 
 complex::complex(int x, int y){
     a=x;
     b=y;
 }; 

//Default Constructor
 class defaultConstructor{
     int m,n;
     public:
     defaultConstructor(void); //No argument so default
     void printNumber(){
         cout<<"The sum of numbers is: "<<m+n<<endl;
     }
 };

 defaultConstructor::defaultConstructor(){
     m=30;
     n=50;
 };

 //For creating point
 class point{
     int x,y;
     public:
     point(int a, int b){
         x=a;
         y=b;
     };
     void displayPoint(){
         cout<<"The value of x"
     };
 };
int main(){
    //For parameterized
    complex c1(4,5);
    c1.printNumber(); 
    complex c2=complex(10, 22);
    c2.printNumber();

    //For default
    defaultConstructor d1;
    d1.printNumber();
    return 0;
}