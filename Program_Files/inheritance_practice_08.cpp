/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
class vehicle{
	public:
	void display(){
		cout<<"This is a Vehicle"<<endl;
	}
};

class car{
	public:
	void display(){
		cout<<"This is a Car"<<endl;
	}
};

class bike{
	public:
	void display(){
		cout<<"This is a Bike"<<endl;
	}
};

int main()
{
	int num;
	cin>>num;
	if (num==2){
		bike obj1;
        obj1.display();
	}else if (num==4){
		car obj1;
        obj1.display();

	}else{
		vehicle obj1;
        obj1.display();

	}
}
