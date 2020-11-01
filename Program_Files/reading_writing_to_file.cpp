#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream name_out("sample1.txt");
    string user_name;
    cout<<"Enter the name: ";
    cin>>user_name;
    name_out<<"My name is: "<<user_name<<endl;

    name_out.close();

    ifstream input_file("sample1.txt");
    string input_text;
    getline(input_file, input_text);
    cout<<"Content in file is: "<<input_text<<endl;

    return 0;
}