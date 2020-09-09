//Member binary operator
//Non member unary operator
//member unary operator
#include <iostream>
using namespace std;
class CA{
    int a;
    int b;
    public:
    CA(){
        a=10;
        b=20;
    }
    CA(int p1, int p2){
        a=p1;
        b=p2;
    }
    void print(){
        cout<<"Value is: "<<a<<" "<<b<<endl;
    }
    friend CA operator-(CA obj);
    friend CA operator+(CA leftObj, CA rightObj);
    

};
CA operator-(CA obj){
        CA temp;
        temp.a=-obj.a;
        temp.b=-obj.b;
        return (temp);
}
CA operator + (CA leftObj, CA rightObj){
        CA temp;
        temp.a=leftObj.a+rightObj.a;
        temp.b=leftObj.b+rightObj.b;
        return (temp); 
    }
// CA operator+(CA leftObj, CA rightObj){
//     CA temp;
//     temp.a=leftObj.a+rightObj.a;
//     temp.b=leftObj.b+rightObj.b;
//     return (temp);
// };
int main(){
    CA o1;
    o1.print();
    CA o2(3,4);
    o2.print();
    CA o4(01,02);
    o4.print();
    


    return 0;
};