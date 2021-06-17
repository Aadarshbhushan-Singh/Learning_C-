#include <iostream>
using namespace std;
class company{
	private: int noOfEmployee; //No of Employee
	public: void get(){
		cout<<"Enter the no of employee: ";
		cin>>noOfEmployee;
		int i;
		int array[noOfEmployee];
		for(i=0; i<noOfEmployee; i++)
		{
			cin>>array[i];
		}
	}
	public: int returnN(){
		return noOfEmployee;
	}
	public: int returnArray(){
		return array;
	}
	friend int calculate();
};

class incomeTax{
	private: int slab;
	private: float taxIncrement;
	public: void getTaxDetails()
	{
		cin>>slab;
		cin>>taxIncrement;
	}
	public: int returnSlab(){
		return slab;
	}
	friend int calculate();
};


int calculate(){
	cout<<"Slab is: "<<incomeTax.returnSlab();
	return 0;
}
int main()
{
	company obj1;
	obj1.get();
	
	
	incomeTax obj2;
	obj2.getTaxDetails();

	calculate();
}
