#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	//input part
	int array[100];
	int num;
	cin>>num;
	for (int i=0; i<num; i++){
		cin>>array[i];
	}
	//findint the greatest
	int greatest=array[0];
	int smallest=array[0];
	for (int i=0; i<num; i++){
		if (array[i]>greatest){
			greatest=array[i];
		}
		if (array[i]<smallest){
			smallest=array[i];
		}
	}
	//output part
	cout<<"Greatest number is: "<<greatest;
	cout<<endl<<"Smallest number is: "<<smallest;
	getch();
}
