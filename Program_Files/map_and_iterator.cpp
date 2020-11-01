#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string, char> grade_list;
    grade_list["Aadarsh"]='A';
    grade_list["Pranjal"]='B';
    grade_list["Deepak"]='C';
    grade_list["Sashwat"]='D';
    //printing the value with the help of key
    cout<<"Grade of aadarsh: ";
    cout<<grade_list["Aadarsh"]<<endl;

    //finding the value with the help of key
    if (grade_list.find("Sashwat")==grade_list.end()){
        cout<<"Key and Value not found."<<endl;
    }else{
        cout<<"Grade of sashwat is: "<<grade_list["Sashwat"]<<endl;
    }

    //Changing the value of value 
    grade_list["Pranjal"]='F';
    cout<<"Grade of pranjal: "<<grade_list["Pranjal"]<<endl;

    //boolean value
    bool a=grade_list["Pranjal"]=='F';
    cout<<a<<endl;

    //Iterators in map
    map<string, char> score_list;
    score_list["Aman"]='A';
    score_list["Aastha"]='B';
    score_list["Aadarsh"]='c';
    cout<<"Score of Aman: "<<score_list["Aman"]<<endl;
    map<string, char>::iterator mapIter;
    mapIter=score_list.begin();

    //Iterators
    //we use -> arrow because iterator uses pointer so we need to dereference it.
    cout<<"Iterator: "<<endl;
    cout<<mapIter->first<<endl; //This will give the key
    cout<<mapIter->second<<endl; //This will give the value

    mapIter++;
    cout<<mapIter->first<<endl;
    cout<<mapIter->second<<endl;


    return 0;
};