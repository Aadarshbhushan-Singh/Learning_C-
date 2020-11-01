#include <iostream>
#include <exception>
using namespace std;
class long_length:public exception{
    private:
    int n;
    public:
    long_length(int n){
        this->n=n;
    }
    int what(){
        cout<<"Too long!"<<endl;
        return n;
    }
    //incase we don't want to return anything from the function
    // void what(){
    //     cout<<"Too long";
    // }
};
int main(){
    int length;
    cout<<"Enter the length: ";
    cin>>length;
    try{
        if(length>10){
            throw long_length(length);
        }else{
            cout<<"Good Name length!"<<endl;
        }
    }catch(long_length e){
        e.what();
    }
    
    return 0;
};  