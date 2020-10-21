#include <iostream>
using namespace std;
// int maximum(int x, int y){
//     return ((x>y)?x:y);
// };
// float maximum(float x, float y){
//     return ((x>y)?x:y);
// }

template <typename myType> void display(myType x, myType y){
    cout<<"You have passed: "<<x<<endl;
    cout<<"You have passed: "<<y<<endl;
    
};

template <typename typeOf> void swapping(typeOf x, typeOf y, typeOf z){
    typeOf t;
    t=x;
    x=y;
    y=z;
    z=t;
    cout<<"X: "<<x<<endl;
    cout<<"Y: "<<y<<<endl;
    cout<<"Z: "<<z<<edndl;
};
int main(){
    // cout<<maximum(2.23,3.51);
    display(3,4);
    display(3.4,5.6);
    display("anil","shetty");

    swapping(3,4,5);


    return  0;
};