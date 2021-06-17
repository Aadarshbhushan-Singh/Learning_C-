#include <iostream>
using namespace std;

class Hello
{

	private: int i;
	public: void show(int i)
	{
		this->i=30;
		cout<<i<<endl;
		cout<<this->i;
		
	}
};

int main()
{
	Hello obj1;
	obj1.show(20);
	cout<<"Hello"<<endl;
	
}
