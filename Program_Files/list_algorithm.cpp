#include <iostream>
#include <list>
using namespace std;

void display(list<int> list1){
    list<int>::iterator iter;
    for (iter=list1.begin(); iter!=list1.end(); iter++){
        cout<<*iter<<" ";
    }
}
int main(){
    list<int> list1;
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    cout<<"Enter "<<n<<" elements "<<endl;
    for (int i=0; i<n; i++){
        int a;
        cin>>a;
        list1.push_back(a);
    }
    display(list1);


    return 0;
};