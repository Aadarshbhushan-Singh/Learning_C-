#include <iostream>
#include <string>
//stoi is to convert string to int
//to_string is used to convert string to integer (stoi stands for string to integer)

#include <typeinfo>
using namespace std;
int main(){
    // convert number to string
    int num1;
    num1=345;
    string string_num1;
    string_num1=to_string(num1);
    cout<<"String of num1: "<<string_num1<<endl;
    string string1;
    string1="6767";
    string_num1=string_num1+string1;
    cout<<"String after adding: "<<string_num1<<endl;

    // convert string to integer

    string string2="4566";
    int int_string2;
    int_string2=stoi(string2);
    cout<<"String converted to integer: "<<int_string2<<endl;
    cout<<"After adding 34 to int_string2: "<<int_string2+34;
    return 0;
    
};