#include <iostream>
using namespace std;
template <class T>
class student{
    private:
    T rollNo;
    T weight;
    public:
    void getValue(T rollNo, T weight){
        this->rollNo=rollNo;
        this->weight=weight;
    }
    T printValueRollNo(){
        return rollNo;   
    }
    T printValueWeight(){
        return weight;
    }
};
int main(){
    student<int> obj1;
    obj1.getValue(19,78);
    cout<<"Roll No: "<<obj1.printValueRollNo()<<endl;
    cout<<"Weight: "<<obj1.printValueWeight()<<endl;

    student<float> obj2;
    obj2.getValue(10.2, 20.36);
    cout<<"Float Roll No: "<<obj2.printValueRollNo()<<endl;
    cout<<"Float Weight: "<<obj2.printValueWeight()<<endl;


    return 0;
};