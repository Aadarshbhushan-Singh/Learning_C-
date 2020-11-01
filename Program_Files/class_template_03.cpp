#include <iostream>
using namespace std;

template <typename T>
class details{
    private:
    T age;
    public:
    void setAge(T age){
        this->age=age;
    }
    void getAge(){
        cout<<"Age is: "<<age<<endl;
    }
};
int main(){
    //int object
    details <int>obj1;
    obj1.setAge(15);
    obj1.getAge();

    //string object
    details <string>obj2;
    obj2.setAge("fifteen");
    obj2.getAge();

    //double object
    details<double>obj3;
    obj3.setAge(45.5666);
    obj3.getAge();
    


    return 0;
};