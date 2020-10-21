#include <iostream>
#include <string.h>
using namespace std;
class employee{
    private:
    int empId;
    char name[30];
    public:
    void get();
    void print();
    bool operator==(int);
    bool operator==(char*);

};

void employee::get(){
    cin>>empId;
    cin>>name;
};

void employee::print(){
    cout<<empId<<endl;
    cout<<name<<endl;
};

bool employee::operator==(int n){
    if (empId==n);
    return true;
    return false;
};

bool employee::operator==(char* n){
    if (strcmp(name, n)==0)
    return true;
    return false;
};

template<class T, class S>
bool search(T s[], int n, S key){
    int i;
    for (i=0; i<n; i++)
    if (s[i]==key)
    return true;
    return false;
};



int main(){
    employee s[20];
    int i, n, key;
    cin>>n;
    for (int i=0; i<n; i++)
    s[i].get();
    cin>>key;
    char skey[20];
    cout<<search(s, n, key);
    cin>>skey;
    cout<<search(s, n, skey);

    return 0;
};