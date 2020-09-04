#include <iostream>
using namespace std;
int main(){
	try {
		int num;
		cout<<"Enter the number: ";
		cin>>num;
		if (num<10){
			throw 10;
		}else if (num>=10 && num<20){
			throw 20;
		}else if (num>=20 && num<30){
			throw 30;
		}else{
			printf("Number greater or equal to 30.");
		}		
	}
	catch(int x){
			if (x==10){
				printf("Erroe: less than 10");
			}else if (x==20){
				printf("Error: between 10 and 19");
			}else if (x==30){
				printf("Error: between 20 and 29");
			}
	}
	
	
	return 0;
}
