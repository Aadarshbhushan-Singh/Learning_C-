#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    string string_num;
    string_num=to_string(num);
    char a, b, c, d, e;
    a=string_num[4];
    b=string_num[3];
    c=string_num[2];
    d=string_num[1];
    e=string_num[0];
    int f, g, h, i, j;
    f=(int)a-48;
    g=(int)b-48;
    h=(int)c-48;
    i=(int)d-48;
    j=(int)e-48;

    long int answer;
    answer=pow(1,f)+pow(2,g)+pow(3,h)+pow(4,i)+pow(5,j);
    cout<<answer;
    return 0;
};