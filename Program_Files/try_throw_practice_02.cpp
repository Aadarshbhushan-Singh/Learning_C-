#include <iostream>
using namespace std;
double division(int x, int y){
    if (y==0){
        throw("Division by zero condition!");
    }
    return (x/y);
};

int main(){
    int x=50;
    int y=60;
    double z=0;
    try{
        z=division(x,y);
        cout<<z<<endl;
    }catch(const char* msg){
        cerr<<msg<<endl;
    }

    return 0;
};