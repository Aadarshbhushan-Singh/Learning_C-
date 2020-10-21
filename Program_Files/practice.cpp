#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Format: vector<Data Type> nameOfVector
    //Size of vector changes according to the necessicity
    //myVector.push_back() adds an element to the end of the vector and resizes it.
    //myVector.at(index) returns an specified index number
    //myVector.size() returns the size of unsigned int equal top the number of elements.
    //myVector.begin() reads vector from first element or index[0].
    //myVector.insert(myVector.begin()+integer, new value) adds element before specified index number.
    //myVector.erase(myVector.begin()+integer) removes element at specified number.
    //myVector.clear() removes all elements in vector.
    // myVector.empty() returns boolean value if vector is empty.

    vector<int> myVector;
    myVector.push_back(34);
    myVector.push_back(45);
    myVector.push_back(23);
    myVector.push_back(21);
    myVector.push_back(65);
    myVector.push_back(15);
    cout<<"Vector: "<<endl;

    for (int i=0; i<myVector.size(); i++){
    cout<<myVector[i]<<" ";

    }
    myVector.insert(myVector.begin(),5);
    
    //After insertinon at begining
    cout<<endl<<"Vector: "<<endl;

    for (int i=0; i<myVector.size(); i++){
    cout<<myVector[i]<<" ";

    }
    //After insertinon at certain index
    cout<<endl<<"Vector: "<<endl;
    myVector.insert(myVector.begin()+3, 5); //will start from begining and add 5 at 3rd index.
    for (int i=0; i<myVector.size(); i++){
    cout<<myVector[i]<<" ";

    }
    //After erasing 5
    cout<<endl<<"Vector: "<<endl;
    myVector.erase(myVector.begin()+3);
    for (int i=0; i<myVector.size(); i++){
    cout<<myVector[i]<<" ";

    }

    //myVector.empty();
    if (myVector.empty()){
        cout<<endl<<"Empty."<<endl;
    }else{
        cout<<endl<<"Not empty"<<endl;
    }

    //myVector.clear() emptys the vector
    myVector.clear();
    if (myVector.empty()){
        cout<<"Empty"<<endl;
    }else{
        cout<<endl<<"Not empty"<<endl;
    }

    return 0;
};