#include <iostream>
#include <conio.h>
using namespace std;
int collatz(int num, int sum);
int main(){
	//taking input for num and sum
	int num;
	int sum=1;
	cout<<"Enter the number: ";
//	scanf("%d",&num);
	cin>>num;
	cout<<num;
	
	//calling the function
	collatz(num, sum);
	getch();
}
int collatz(int num, int sum){
	while (num>1){
		if (num%2==0){
			num=num/2;
			cout<<" "<<num;
		}
		else{
			num=num*3+1;
			cout<<" "<<num;
		}
		sum=sum+1;
	}
	
	//printing the vlaue of sum i.e number count
//	printf("Number count is: %d",sum);
	cout<<endl<<"Number count is: "<<sum;
	
}
