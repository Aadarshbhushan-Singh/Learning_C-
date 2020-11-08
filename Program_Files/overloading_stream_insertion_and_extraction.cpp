#include <iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(){
        name="NoName";
        age=0;
    }

    friend ostream &operator << (ostream &output, person &p);
    friend istream &operator >> (istream &input, person &p);
};

ostream &operator <<(ostream &output, person &p){
    output<<"My name is: "<<p.name<<endl;
    output<<"My age is: "<<p.age<<endl;
    return output;
};

istream &operator >>(istream &input, person &p){
    cout<<"Enter the name ";
    input>>p.name;
    cout<<"Enter the age: ";
    input>>p.age;
    return input;
};


int main(){
    person p1;
    cin>>p1;
    cout<<p1;
};
