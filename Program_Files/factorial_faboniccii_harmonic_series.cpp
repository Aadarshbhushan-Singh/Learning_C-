#include <iostream>
void factorial(int num);
void fibonacci(int num);
void harmonic (int num);
using namespace std;
int main(){
	int num;
	cout<<"Enter the number: ";
	cin>>num;
	if (num<0){
		cout<<"Invalid Input";
	}
	else{
		cout<<"--------Factorial-----------"<<endl;
		factorial (num);
		cout<<endl<<endl<<endl<<"--------Fibonacci-----------";
		fibonacci (num);
		cout<<endl<<endl<<endl<<"--------Harmonic-----------";
		harmonic (num);
	}
	
}

//Factorial Function
void factorial(int num){
	int fact=1;
	if(num==0 || num==1){
		fact=1;
	}
	else{
		for (int i=1; i<=num; i++){
			fact=fact*i;
		}
	}
	if (num<0){
		cout<<"Invalid Input";
	}
	else{
		cout<<"The factorial of the number is: "<<fact;		
	}

}
//Fibonacci Function
void fibonacci(int num){
	if (num==0){
		cout<<0;
	}
	else{
		cout<<endl;
		int array[100];
		array[0]=0;
		array[1]=1;
		for (int i=0; i<num; i++){
			array[i+2]=array[i]+array[i+1];
		}
		cout<<endl<<"Fibonacci series upto n+2 (except 0 and 1): ";
		for (int i=0; i<num+2; i++){
			cout<<array[i]<<" ";
		}
	}
	
}

//Harmonic Function
void harmonic(int num){
	cout<<endl;
	float sum=0;
	for (int i=1; i<=num; i++){
		if (i<num){
			cout<<"1/"<<i<<"+";
		}
		else if (i==num){
			cout<<"1/"<<num;
		}
		sum=sum+1/float(i);
	}
	cout<<endl<<"The sum of harmonic series is: "<<sum;
}
