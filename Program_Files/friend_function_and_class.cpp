#include <iostream>
using namespace std;
class rectangle{
    int length, breadth;
    public:
    rectangle(){
        length=10;
        breadth=20;
    }
    friend class square;
};

class square{
    int s;
    public:
    square(){
        s=50;
    }
    void Display(rectangle r1){
        cout<<"Length: "<<r1.length<<endl;
        cout<<"breadth: "<<r1.breadth<<endl;
        cout<<"Side: "<<s<<endl;
    }
};
int main(){
    rectangle o1;
    square o2;
    o2.Display(o1);


    return 0;
};