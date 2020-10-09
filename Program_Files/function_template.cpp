#include <iostream>
using namespace std;

//Function Overloading
/*
int add (int a, int b){
    return (a+b);
}
float add (float a, float b){
    return (a+b);
}

double add (double a, double b){
    return (a+b);
};
*/

//Template
template <typename T> //T is the datatype holder.
T add(T x, T y){ //Space is mandatory between datayep i.e. T and the variable name.
    return (x+y);
}
int main(){

    //Code for function overloading.
    // cout<<"The addition of two integers is: "<<add(3,4)<<endl;
    // cout<<"The addition of two float is: "<<add(3.2,4.6)<<endl;
    // cout<<"The addition of two double is: "<<add(3.72,4.65)<<endl;

    cout<<"The addition of two integers is: "<<add<int>(3,4)<<endl;
    cout<<"The addition of two floats is: "<<add<float>(3.2,5.6)<<endl;
    cout<<"The addition of two doubles is: "<<add<double>(3.25,6.58)<<endl;
    return 0;
};