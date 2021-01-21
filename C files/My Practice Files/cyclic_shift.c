#include <stdio.h>
int main(){
	//n is array size
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int array1[n];
	int i=0;
	for (i=0; i<n; i++){
		scanf("%d",&array1[i]);
	}
	printf("Enter the value of m: ");
	int m;
	int count=0;
	scanf("%d",&m);
	int array2[n];
	for(i=0; i<n; i++){
		if(i<n-m){
			array2[i+m]=array1[i];
		}else{
			array2[count]=array1[i];
			count+=1;
		}
		
	}
	
	//Prrinting the final array
	for (i=0; i<n; i++){
		printf("%d ", array2[i]);
	}
	
	
	return 0;
}

