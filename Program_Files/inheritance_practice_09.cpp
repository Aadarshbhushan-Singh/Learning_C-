/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
using namespace std;
class rectangle{
	protected:
	int width, height;
	public:
	void display(){
		cout<<width<<" "<<height<<endl;
	}
};

class rectangleArea: public rectangle{
	public:
	void read_input(){
		cin>>width;
		cin>>height;
        rectangle::display();
	}
	void display(){
		int area;
		area=width*height;
		cout<<area;
	}
};
int main()
{
	rectangleArea obj1;
	obj1.read_input();
	obj1.display();
	//Write code here
}
