#include <iostream>
#include <conio.h>
using namespace std;
void selectionSort(int array[], int n);
int main(){
	int n;
	cout<<"Enter the number of elements: ";
	cin>>n;
	int array[n];
	for (int i=0; i<n; i++){
		cin>>array[i];
	}
	selectionSort(array, n);
	cout<<"Sorted array is: ";
	for (int i=0; i<n; i++){
		cout<<array[i]<<" ";
	}	
	return 0;
	getch();
}
void selectionSort(int array[], int n){
	for (int i=0; i<n-1; i++){
		int imin=i;
		for (int j=i+1; j<n; j++){
			if (array[j]<array[imin]){
				imin=j;
			}
		}
		int temp=array[i];
		array[i]=array[imin];
		array[imin]=temp;		
	}
}
