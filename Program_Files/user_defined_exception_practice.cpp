#include <iostream>
#include <exception>
using namespace std;

class add_zero:public exception{
    private:
    int num1, num2;
    int sum;
    public:
    void setValue(int num1, int num2){
        this->num1=num1;
        this->num2=num2;
    }
    int calculateValue(){
        sum=num1+num2;
        return sum;        
    }
    void print_value(){
        cout<<"Sum is: "<<sum<<endl;
    }
    void what(){
        cout<<"No meaning of adding 0!"<<endl;
    }

};  

int main(){
    int a=10;
    int b=0;
    int c=0;
    try{
        if (b!=0){
            add_zero obj1;
            obj1.setValue(a,b);
            obj1.calculateValue();
            obj1.print_value();
        }
        if (b==0){
            add_zero obj2;
            throw obj2;
        }
    }catch(add_zero &obj2){
        obj2.what();
    }
    
    return 0;
};