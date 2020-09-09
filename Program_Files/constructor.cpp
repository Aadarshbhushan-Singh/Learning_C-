#include <iostream>
using namespace std;

class complex{
    int a, b;
    public:
    //creating a constructor
    //Constructor is a special member function with same name as of class.
    //It is used to initialize the objects of its class.
    //It is automatically invoked when the object of class is made.
    complex(void);  //constructor declearation 
    void printNumber(){
        cout<<"The number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};


complex::complex(void){
    a=10; 
    b=0;
    cout<<"This is invoded itself.\n";
}
int main(){
    complex c;
    c.printNumber();
 

    return 0;
};
/*Properties
1. The constructor which doesn't accept parameter is default constructor and which accepts is called parameterized constructor.
2. It should be decleared in the public with the name of the class. 
3. They donot have return values and do not have return type.
4. It can have default arguments.
5. We cannot refer to their adress.
*/