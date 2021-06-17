#include <iostream>
using namespace std;

//Function
int add(int we, int y)
{
	int sum;
	sum=we+y;
	cout<<"Print inside add: "<<sum;
	return sum;
	
}

int greaterSum(int x, int y)
{
	int sum;
	sum=x+y+10;
}
int main()
{
	int sum;
	int x=20;
	int y=30;
	sum=x+y+20;
	cout<<"Main sum: "<<sum<<endl; //70
	add(50, y); //No error
	add(50,60); //No error
	add(x,y); //Error
	cout<<"Sum add: "<<add(40, y)<<endl; //70
	

	int result=add(10,30)+90;
	cout<<result;
	
	
	return 0;	
}
