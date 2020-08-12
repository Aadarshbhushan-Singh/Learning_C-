#include <iostream>
#include<conio.h>
using namespace std;
int main(){
	cout<<"hello world"<<endl;
	cout<<"This is the syntax for printing<<cout...........;";
	cout<<endl<<"This is next line.";
	cout<<endl;
	//data types
	short a=10; //size is 2 byte
	cout<<endl<<"The value of a is: "<<a;
	int const b=10; //size is 4 byte    Refer lline 37 for applicaiton of const
	cout<<endl<<"The value of b is: "<<b;
	long c=10; //size if 4 byte  int<long
	cout<<endl<<"The value of c is: "<<c;
	long long d=10; //size is 8 byte
	cout<<endl<<"The value of d is: "<<d;
	float e=10.45; // size is 4
	cout<<endl<<"The valud of e is: "<<e;
	double f=10.4545; //size is 8
	cout<<endl<<"The value of f is: "<<f;
	long double g=10.3434543;
	cout<<endl<<"The value of g is: "<<g;
	
	//Finding the size of short, int and long
	cout<<endl;
	cout<<endl<<"The size of a (short) is: "<<sizeof(a);
	cout<<endl<<"The size of b (int) is: "<<sizeof(b);
	cout<<endl<<"The size of c (long) is: "<<sizeof(c);
	cout<<endl<<"The size of d (long long) is: "<<sizeof(d);
	cout<<endl<<"The size of e (float) is: "<<sizeof(e);
	cout<<endl<<"The size of f (double) is: "<<sizeof(f);
	cout<<endl<<"The size of g (long double) is: "<<sizeof(g);
	
	//changing the value of previous assigned variable
	a=20;
	cout<<endl<<endl<<"The changed value of a is: "<<a;
	//The value of b cannot be changed because it is decleared constant.
	getch();
}

