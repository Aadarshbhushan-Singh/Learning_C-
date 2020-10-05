#include <iostream>
using namespace std;
class mango{
    public:
    int nMango;
    mango(){
        cout<<"No of mango: ";
        cin>>nMango;
    }
    void displayMango(){
        cout<<"Total number of mango is: "<<nMango<<endl;
    }
};

class apple{
    public:
    int nApple;
    apple(){
        cout<<"No of apple: ";
        cin>>nApple;
    }
    void displayApple(){
        cout<<"Total number of apple is: "<<nApple<<endl;
    }
};

class fruits: public apple, public mango{
    public:
    int total;
    void displayTotal(){
        total=nApple+nMango;
        cout<<"Total number of fruits is: "<<total<<endl;
    }
};
int main(){
    fruits objFruits;
    objFruits.displayTotal();

    return 0;
};