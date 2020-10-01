#include <iostream>
using namespace std;
class simpleCalc{
    private:
    int num1, num2;
    public:
    simpleCalc(){
        cout<<"For simple calculator: "<<endl;
        cout<<"Enter the number 01: ";
        cin>>num1;
        cout<<"Enter the number 02: ";
        cin>>num2;
        display();
    }
    void display(){
        cout<<"Sum: "<<num1+num2<<endl;
        cout<<"Difference: "<<num1-num2<<endl;
        cout<<"Product: "<<num1*num2<<endl;
        cout<<"Remainder: "<<num1/num2<<endl;
    }
};

class scientificCalc{
    private:
    int num1, num2;
    public:
    scientificCalc(){
        cout<<"For Scientific Calculator: "<<endl;
        cout<<"Enter the number 01: ";
        cin>>num1;
        cout<<"Enter the number 02: ";
        cin>>num2;
        display();
    }
    void display(){
        cout<<"Sum: "<<num1+num2<<endl;
        cout<<"Difference: "<<num1-num2<<endl;
        cout<<"Product: "<<num1*num2<<endl;
        cout<<"Remainder: "<<num1/num2<<endl;
    }
};
class hybrid: public simpleCalc, public scientificCalc{
    
};
int main(){
    hybrid obj3;

    return 0;
};