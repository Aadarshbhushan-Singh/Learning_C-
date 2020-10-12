#include <iostream>
#include <exception>
using namespace std;
class divideByZeroException: public exception{
	public:
		divideByZeroException()
		:message ("attemped to divide by zero"){}
		char * what() {return message;}
	private:
		char * message;
};
int main(){
	try{
		int a, b;
		cout<<"Enter two numbers: ";
		cin>>a>>b;
		if (b==0){
			divideByZeroException d;
			throw d;
		}
		else{
			cout<<"a/b="<<a/b<<endl;
		}
	}
	catch(exception& e){
		cout<<e.what();
	}
	
	
	return 0;	
};
