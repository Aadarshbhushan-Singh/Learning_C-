#include <iostream>
using namespace std;
class Complex{
	int a, b;
	public:
		void setNumber(int n1, int n2){
			a=n1;
			b=n2;
		}
		friend Complex sumComplex(Complex o1, Complex o2);
		void printNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
	
};
Complex sumComplex(Complex o1, Complex o2){
	Complex o3;
	o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
	return o3;
}

int main(){
	Complex c1, c2, sum;
	c1.setNumber(4,5);
	c2.setNumber(9,3);
	c1.printNumber();
	c2.printNumber();
	
	sum = sumComplex(c1, c2);
	sum.printNumber();
	
	return 0;
}

/* 
1. friend function allows its private data to use to that particular function.
2. outside decleared function is not in the scope of the class and hence cannnot be called using the object of the class.
3. Can be invoked just like other function without using objects.
4. Can be decleared in both public and private parts of the class.
*/
