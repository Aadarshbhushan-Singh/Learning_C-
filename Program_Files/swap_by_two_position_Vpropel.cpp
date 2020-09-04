#include <iostream>
using namespace std;
int main(){
	int n, m;
	cout<<"Enter the number of element: ";
	cin>>n;
	int array[n];
	for (int i=0; i<n; i++){
		cin>>array[i];
	}
	cout<<"Enter the swapping index: ";
	cin>>m;
	int newArray[m];
	for (int i=0; i<m; i++){
		newArray[i]=array[n-m+i];
	}
	for (int i=0; i<n-1; i++){
		newArray[i+m]=array[i];
	}
	for (int i=0; i<n; i++){
		cout<<newArray[i];
	}
	
	return 0;
}
