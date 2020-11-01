#include <iostream>
#include <fstream>
using namespace std;
/*The useful classes for working with files in cpp are:
1.fstreambase
2.ifstream -> derived from fstreambase
3.ofstream -> derived from fstreambase

In order to work with files in c++, you will have to open it. There are two ways to
open a file:
First: using constructor
Second: using member function open() of the class

*/



int main(){
    // opening files using constructor
    // ofstream out("sample1.txt");
    // writing text in files
    string st="Hello_aadarsh";
    // out<<st;

    // opening files using constructor and reading from it
    string st2;
    ifstream in("sample1.txt"); //read operation
    // in>>st2;
    getline(in, st2);
    getline(in, st2);
    cout<<st2;

    return 0;
};