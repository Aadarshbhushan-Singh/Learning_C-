//For understanding the algorithm visit https://youtu.be/COk73cpQbFQ
#include <iostream>
using namespace std;
void quickSort(int array[], int start, int end);
int partition(int array[], int start, int end);

int main(){
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int array[n];
	for (int i=0; i<n; i++){
		cin>>array[i];
	}
	quickSort(array, 0, n-1);
	cout<<endl<<"Sorted array: "<<endl;
	for (int i=0; i<n; i++){
		cout<<array[i]<<" ";
	}
}
void quickSort(int array[], int start, int end){
	int pivot;
	if (start<end){
		pivot=partition(array, start, end);
		quickSort(array, start, end-1);
		quickSort(array, pivot+1, end);
	}
}
int partition(int array[], int start, int end){
	int pivot = array[end];
	int partitionIndex = start;  //set partition at start initially
	for (int i=start; i<end; i++){
		if (array[i]<=pivot){
			swap(array[i], array[partitionIndex]);
			partitionIndex++;
		}
	}
	swap(array[partitionIndex], array[end]);
	return partitionIndex;
	
}
