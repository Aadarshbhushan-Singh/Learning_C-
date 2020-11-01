#include <iostream>
using namespace std;

template<typename T>
class alpha{
    protected:
    T a;
    public:
    void check(){
        cout<<"Checked!"<<endl;
    }
};

template <typename T, typename T1>
class beta:public alpha<T>{
    private:
    T1 b;
    public:
    void get(){
        cin>>alpha<T>::a>>b;
    }
    void display(){
        cout<<alpha<T>::a<<b<<endl;
        alpha<T>::check();
    }
};
int main(){
    beta<int, float> obj1;
    beta<float, int> obj2;
    cout<<"Enter integer and float: ";
    obj1.get();
    obj1.display();
    cout<<"Enter float and integer: ";
    obj2.get();
    obj2.display();


    return 0;
};