#include <iostream>
using namespace std;

template <typename T, typename U>
class weight{
	private:
	T kg;
	U grams;
	public:
	void setData(T x, U y){
		kg=x;
		grams=y;
	}
	T getKgData(){
		return kg;
		return grams;
	}
	U getGramsData(){
		return grams;
	}

};
int main(){
	weight <int, float> obj1;
	obj1.setData(5, 0.3);
	cout<<"The value is: "<<obj1.getKgData()<<" "<<obj1.getGramsData()<<endl;
	cout<<"The vaue of gram is: "<<obj1.getGramsData()<<endl;

	weight<double, int> obj2;
	obj2.setData(0.2, 3);
	cout<<"The value of float is: "<<obj2.getKgData()<<endl;
	cout<<"The value of grams is: "<<obj2.getGramsData()<<endl;
	
	return 0;	
};
