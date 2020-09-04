#include <iostream>
using namespace std;
void transfer(int *, int *, int *);

struct Account {
	int acNo;
	int balance;
}a1, a2;

int main(){
	cout<<"Enter the details of account no 01: \n";
	cout<<"Account no: ";
	cin>>a1.acNo;
	cout<<"Balance: ";
	cin>>a1.balance;
	
	cout<<"Enter the details of account no 02: \n";
	cout<<"Account no: ";
	cin>>a2.acNo;
	cout<<"Balance: ";
	cin>>a2.balance;
	
	int amount;
	cout<<"Enter the amount to be transfered: ";
	cin>>amount;
	if (amount<0){
		cout<<"Invalid!";
	}else{
		transfer(&a1.acNo, &a2.acNo, &amount);
	}
	
	
	return 0;	
}

void transfer(int *ac01, int *ac02, int *amount){
	a1.balance=a1.balance-*amount;
	a2.balance=a2.balance+*amount;
	cout<<"The new updated amont in account is: "<<a2.balance;
	
};
