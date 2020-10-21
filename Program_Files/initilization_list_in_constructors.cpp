#include <iostream>
using namespace std;
/*
syntax for initialization list in constructor:
conststructor(argument-list):initilization-section
{
    assingment+other code;
}
class test{
    int a;
    int b;
    public:
    test(int i, int j): a(i), b(j)
};
*/

class test{
    int a;
    int b;
    public:
    // test(int i, int j): a(i), b(j) 
//We can write like this to assign the value of a to i and b to j. its like int i=a, int j=b;
    // test(int i, int j): a(i), b(i+j) 
    //this will also run
    // test(int i, int j): a(i), b(a+j)
    test(int i, int j): b(j), a(i+b)
    //This code will throw the garbage value. because a will be initialized first because a is written first
{
        cout<<"Constructor list initialized."<<endl;
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};
int main(){
    test(1,2);

    return 0;
};