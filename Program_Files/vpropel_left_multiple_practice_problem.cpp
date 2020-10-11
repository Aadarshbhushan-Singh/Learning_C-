#include <iostream>
#include <string>

using namespace std;
int main(){
    int num1;
    cout<<"Enter the number: ";
    cin>>num1;
    string string_num, left, right;
    //left
    string_num=to_string(num1);
    left=string_num[0];
    left=left+string_num[1];
    //right
    right=string_num[2];
    right=right+string_num[3];

    //output
    cout<<"String left: "<<left<<endl;
    cout<<"String right: "<<right<<endl;

    int left_num, right_num;
    left_num=stoi(left);
    right_num=stoi(right);

    if (left_num%right_num==0){
        cout<<"Yes!";
    }else{
        cout<<"No!";
    }


    return 0;
};