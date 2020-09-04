#include <iostream>
using namespace std;
int square(int a);
void cube(int *);

int main(){
	//pass by value
	cout<<"PASS BY VALUE\n";
	int a=8;
	cout<<"The value of a is: "<<a<<endl;
	a=square(a);
	cout<<"The new value of a is: "<<a<<endl;
	
	//pass by reference
	cout<<"PASS BY REFERENCE\n";
	int num=3;
	cout<<"The value of num is: "<<num<<endl;
	cube(&num);
	cout<<"The new value of num is: "<<num<<endl;
	
	//This returns the value 0 of ptr.
	int *ptr;
	cout<<"The value of ptr is: "<<ptr;
	
	return 0;
}
int square (int a){
	return a*a;
}

void cube(int *num){
	*num=(*num)*(*num)*(*num);
}
