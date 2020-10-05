#include <iostream>
using namespace std;
class Mammals{
    public:
    void mammalPrint(){
        cout<<"I am Mammal"<<endl;
    }
};

class MarineAnimal{
    public:
    void marinePrint(){
        cout<<"I am marine Animal."<<endl;
    }
};

class BlueWhale: public Mammals, public MarineAnimal{
    public:
    void bluePrint(){
        cout<<"I am marine and mammal both."<<endl;
    }
};
int main(){
    Mammals objMammal;
    objMammal.mammalPrint();
    MarineAnimal objMarine;
    objMarine.marinePrint();
    BlueWhale objBlue;
    objBlue.bluePrint();
    objBlue.mammalPrint();
    objBlue.marinePrint();

    return 0;
}