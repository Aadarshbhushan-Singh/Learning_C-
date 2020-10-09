#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int R, r;
    cin>>R;
    cin>>r;
    double bigVolume, smallVolume;
    bigVolume=(4/3*M_PI*R*R*R);
    smallVolume=(4/3*M_PI*r*r*r);
    int number;
    number=ceil(bigVolume/smallVolume);
    cout<<number;


    return 0;
};