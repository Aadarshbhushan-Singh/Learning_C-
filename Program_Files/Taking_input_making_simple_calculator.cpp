#include <iostream>
using namespace std;
int main(){
	int num1, num2;
	char op; //operator
	
	//taking input
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	cout<<"Enter the operator (+,-,/,*): ";
	cin>>op;
	
	//For sum
	if (op=='+'){
		int sum=num1+num2;
		cout<<"The sum is: "<<sum;
	}

	//For difference
	if (op=='-'){
		int difference=num1-num2;
		cout<<"The difference is: "<<difference;
	}	
	
	//For product
	if (op=='*'){
		int product=num1*num2;
		cout<<"The product is: "<<product;
	}

	//For remainder
	if (op=='/'){
		float remainder=float(num1)/num2;  //atleast one of the operator should be float to display the float result
		cout<<"The remainder is: "<<remainder;
	}
	return 0;
}
