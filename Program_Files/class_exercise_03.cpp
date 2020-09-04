#include <iostream>
#include <string>
using namespace std;
class binary{
    string s;
    public:
    void read();
    void chk_bin();
    void ones();
    void display();
    
};
void binary::read(){
    cout<<"Enter the binary number: \n";
    cin>>s; 
};
void binary::chk_bin(){
    int binary=0;
    for (int i=0; i<s.length(); i++){
        if (s.at(i)!='0' && s.at(i)!='1'){
            binary+=1;
        }
    }
    if (binary==0){
        cout<<"Yes it is a binary!";
        cout<<endl<<"The one's compliment of binary number is: \n";
        ones();
    }else{
        cout<<"No it is not a binary!";
    }
};
void binary::ones(){
	for (int i=0; i<s.length(); i++){
        if (s.at(i)=='0'){
           cout<<1;
            
        }else{
            cout<<0;
        }
    }
};
int main(){
    binary b1;
    b1.read();
    b1.chk_bin();
    
	return 0;
}
