#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n;
    int number_elements;
    cin>>n;
    cin>>number_elements;
    vector<int> list_int;
    vector<double> list_double;
    vector<char> list_char;
    vector<int>::iterator iter_int;
    vector<double>::iterator iter_double;
    vector<char>::iterator iter_char;
    if (n==1){
        for (int i=0; i<number_elements; i++){
            int num;
            cin>>num;
            list_int.push_back(num);
        }
    }else if(n==2){
        for (int i=0; i<number_elements; i++){
            double num;
            cin>>num;
            list_double.push_back(num);
        }
    }else if(n==3){
        for (int i=0; i<number_elements; i++){
            char character;
            cin>>character;
            list_char.push_back(character);
        }
    }
    sort(list_int.begin(), list_int.end());
    sort(list_double.begin(), list_double.end());
    sort(list_char.begin(), list_char.end());
    if (n==1){
        for (iter_int=list_int.begin();  iter_int!=list_int.end(); iter_int++){
            cout<<*iter_int<<endl;
        }
    }
   


};