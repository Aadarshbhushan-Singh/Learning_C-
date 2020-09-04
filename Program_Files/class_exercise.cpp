#include <iostream>
using namespace std;
class student{
	public:
	char name[3];
	int roll_no;
};
int main(){
	student s1;
	s1.name='ad';
	s1.roll_no=90;
	cout<<"Name: "<<s1.name;
	cout<<"The roll number is: "<<s1.roll_no;
	return 0;
}
