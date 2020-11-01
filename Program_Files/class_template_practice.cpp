#include <iostream>
using namespace std;
template <typename T>
class add{
    private:
    T x, y, sum;
    public:
    void setValue(T x, T y){
        this->x=x;
        this->y=y;
    }
    void calculateValue(){
        sum=x+y;
    }
    void printValue(){
        cout<<"Sum: "<<sum<<endl;
    }
};

int main(){
   add<int> obj1;
   obj1.setValue(10,29);
   obj1.calculateValue();
   obj1.printValue();

   add<float> obj2;
   obj2.setValue(10.25, 32.14);
   obj2.calculateValue();
   obj2.printValue();
};