#include <iostream>
using namespace std;
int main()
{
	int n=10;
	int i;
	int sum=0;
	for(i=0; i<n; i++)
	{
		int num;
		cin>>num;
		sum=sum+num;
	}
	cout<<"The average value is "<<(sum/10);
	return 0;
}
