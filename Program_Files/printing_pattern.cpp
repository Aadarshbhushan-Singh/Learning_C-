#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	for (int i=0; i<=num; i++){
		for (int j=0; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	for (int i=num-1; i>=0; i--){
		for (int j=0; j<=i; j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}
