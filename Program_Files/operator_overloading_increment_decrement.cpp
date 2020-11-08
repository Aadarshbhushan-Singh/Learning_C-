#include <iostream>
using namespace std;
class weight{
    private:
    int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int kg){
        this->kg=kg;
    }
    void printValue(){
        cout<<"The value of kg is: "<<kg<<endl;
    }
    // void operator ++(){
    //     ++kg;
    // };
    // void operator ++(int){ //This int is just to distinguish from pre-increment operator and post-increment operator
    //     kg++;
    // }
    // void operator --(){
    //     --kg;
    // };
    // void operator --(int){ //This int is just to distinguish from pre-increment operator and post-increment operator
    //     kg--;
    // }
    weight operator ++(){
        weight temp;
        temp.kg=++kg;
        return temp;
    }
};
int main(){
    weight obj1(10);
    // obj1.printValue();
    // ++obj1; //obj1.operator ++() is going to be called
    // obj1.printValue();
    // obj1++; //obj1.operator ++(int) is going to be called
    // obj1.printValue();
    // obj1--;
    // obj1.printValue();
    // --obj1;
    // obj1.printValue();
    weight obj2;
    obj2=++obj1;
    obj1.printValue();


    return 0;
};