#include <iostream>
using namespace std;
int main(){
	try {
		int momsAge, sonsAge;
		cout<<"Enter Mom's Age: ";
		cin>>momsAge;
		cout<<"Enter Son's Age: ";
		cin>>sonsAge;
		
		if (sonsAge>momsAge){
			throw 1;
		}else{
			cout<<"The input is correct.";
		}
	}catch(int x){
		cout<<"Error: Mom's age can't be smaller than son's age.";
	}
	
	
	return 0;
}
