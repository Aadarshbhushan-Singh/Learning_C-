/*
This is a program which takes two number as input. For the interval if the number is less than 9 then it prints its english term (eight for 8). 
If the number is greater than nine, then it prints odd for odd number and even for even number.
*/

#include <iostream>
using namespace std;
int main(){
	int a, b;
	string array[10]={"","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	cin>>a>>b;
	for (int i=a; i<=b; i++){
		if (i<=9){
			cout<<array[i]<<endl;
		}else{
			if (i%2==0){
				cout<<"even"<<endl;
			}else{
				cout<<"odd"<<endl;
			}
		}
	}
}
