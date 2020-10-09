#include <iostream>
using namespace std;
class number{
	protected:
	int num;
	public:
	number(){
		cout<<"Enter the number: ";
		cin>>num;
	}
};

class square: public number{
	private: 
	int square_num;
	public:
	square(){
		square_num=num*num;
		cout<<"Square of "<<num<<" is "<<square_num<<endl;

	}
};

class cube: public number{
	private:
	int cube_number;
	public:
	cube(){
		cube_number=num*num*num;
		cout<<"Cube of "<<num<<" is "<<cube_number<<endl;
	}
};

int main(){
	square obj1;
	cube obj2;	
	return 0;
};	