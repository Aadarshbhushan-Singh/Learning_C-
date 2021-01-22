#include <stdio.h>

int accending(int array[]){
	int i=0, j=0; 
	for(i=0; i<5; i++){
		for(j=i+1; j<5; j++){
			if(array[i]>array[j]){
				int temp;
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	
	return array;
}

void printArray(int array[]){
	int i=0;
	for(i=0; i<5; i++){
		printf("%d",array[i]);
	}
}
int main(){
	int array[5], i=0;
	for(i=0; i<5; i++){
		scanf("%d",&array[i]);
	}
	
	accending(array);
	
	printArray(array);
	
	
	
}
