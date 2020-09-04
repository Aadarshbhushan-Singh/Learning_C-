#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int x=90;
	int &y=x;
	x=89;
	cout<<"X: "<<x<<endl;
	cout<<"Y: "<<y<<endl;
	cout<<"X: "<<x<<endl;
	return 0;
}
