#include <stdio.h>
#include <math.h>
//x and y are the index from which average is to be calculated
float average(int array[], int x, int y){
	int sum=0;
	float average_array;
	int i=0;
	for(i=x; i<=y; i++){
		sum=sum+array[i];
	}
	average_array=sum/(y-x+1);
	
	return average_array;
}
void printArray(int array1){
	int i;
	int len_array=sizeof(array1)/sizeof(int);
	for (i=0; i<len_array; i++){
		printf("%d",i);
	}
};


int main(){
	int i=0,j=0,k=0;
	//Input of number of elements
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	//Input of array
	int array[n];
	printf("Enter the elements in array: ");
	for(i=0; i<n; i++){
		scanf("%d",&array[i]);
	}
	
	//Calculate the average using the function and store in certain value
	int x=1;
	int y=9;
	for(i=0; i<((n-2)/2); i++){
		int s[i];
		s[i]=average(array, x, y);
		printf("%d ",s[i]);
		x=x+1;
		y=y-1;
		printf("x: %d y: %d",x, y);
	}	
	return 0;
}


