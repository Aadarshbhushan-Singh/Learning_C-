#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool desc(int i, int j){return i>j;}; //give (j>i for printing in increasing order);
int main(){
    //Making of vector and pushing element to it
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(2);
    v1.push_back(15);
    v1.push_back(40);
    v1.push_back(22);
    
    //We need to sort this...either increasing or decreasing
    sort(v1.begin(), v1.end());
    cout<<"Printing sorted array: "<<endl;
    for (int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    //sort in reverse order
    sort(v1.begin(), v1.end(), desc);
    cout<<endl<<"Printing reverse sorted array: "<<endl;
    for (int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //making vector of string
    vector<string> v2;
    v2.push_back("Gorilla");
    v2.push_back("Shyam");
    v2.push_back("Raju");
    v2.push_back("Aadarsh");
    v2.push_back("Deepak");
    v2.push_back("Pratham");

    //Sorting the string
    sort(v2.begin(), v2.end());
    for (int i=0; i<v2.size(); i++){
        cout<<v2[i]<<endl;
    }

    //Sorting the string in reverse order
    cout<<endl<<"Sorting array in reverse order."<<endl;
    sort(v2.begin(), v2.end(), greater<string>());
    for (int i=0; i<v2.size(); i++){
        cout<<v2[i]<<endl;
    }

    //Sorting integer array
    cout<<"Sorting integer array."<<endl;
    int a[5]={5,6,8,2,4};
    sort(a, a+5);
    for (int i=0; i<5; i++){
        cout<<a[i]<<endl;
    }

    cout<<endl;
    //searching an element in the vector
    int number=22;
    vector<int>::iterator it;
    it=find(v1.begin(), v1.end(), number);
    if (it!=v1.end()){
        cout<<"Number is found!"<<endl;
    }else{
        cout<<"Number is not found!"<<endl;
    }

    //counting a value
    int num=10;
    int c;
    c=count(v1.begin(), v1.end(), num);
    cout<<"The number of "<<num<<" is "<<c;
    return 0;
};