#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    //giving input to file
    ifstream file_01;
    file_01.open("sample1.txt");
    string str;
    getline(file_01, str);
    cout<<"Content in file is: "<<endl<<str;
    file_01.close();

    //giving output to file
    ofstream file_02;
    string str2;
    cout<<"Enter five names: ";
    file_02.open("sample1.txt");
    for (int i=0; i<5; i++){
        cin>>str2;
        file_02<<str2;
    };
    file_02.close();

    //again reading from file
    string str3;
    ifstream file_03;
    file_03.open("sample1.txt");
    while (file_03.eof()==0){
        getline(file_03, str3);
        cout<<str3;
    }

    return 0;
};