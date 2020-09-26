#include <iostream>
using namespace std;
class number{
    public:
    // number(void);
    number(int x, float y);
    number (float y, int x);

};
number::number(int x, float y){
        cout<<"First number is int."<<x<<endl;
        cout<<"Second number is float."<<y<<endl;
};

number::number(float y, int x){
        cout<<"First number is float."<<y<<endl;
        cout<<"Second number is integer."<<x<<endl;
};

int main(){
    int x, p;
    float y, q;
    cin>>x;
    cin>>y;
    cin>>p;
    cin>>q;
    number n1(x,y);
    number n2(q, p);
    
    cout<<endl;
    return 0;
};