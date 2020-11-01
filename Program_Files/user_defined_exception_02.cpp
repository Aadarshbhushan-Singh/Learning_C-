#include <iostream>
#include <exception>
using namespace std;
class divide_by_zero_exception: public exception{
    public:
    const char* what() const throw(){
        return "Divide By Zero Exception";
    }
};
int main(){
    try{
        int a, b;
        cout<<"Enter two numbers: ";
        cin>>a>>b;
        //compute a/b
        if (b==0){
            divide_by_zero_exception d;
            throw d;
        }else{
            cout<<"a/b="<<a/b<<endl;
        }
    }catch(exception& e){
        cout<<e.what();
    }

    return 0;
};