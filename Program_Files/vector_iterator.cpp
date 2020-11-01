#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(49);
    v1.push_back(98);
    v1.push_back(32);
    v1.push_back(23);
    v1.push_back(45);

    //Avoid this typs of approach.
    cout<<"Printing using normal iterator: "<<endl;
    for (int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    //Use this type of approach. This is more professional and accurate.
    cout<<endl;
    cout<<"Printing using vector iterator: "<<endl;
    vector<int>::iterator vecIter;
    for (vecIter=v1.begin(); vecIter!=v1.end(); vecIter++){
        cout<<*vecIter<<" ";
    }
   

    return 0;
};