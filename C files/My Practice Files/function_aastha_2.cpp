#include<stdio.h>

void swapping(int array[]){
	int temp;
	temp=array[0];
	array[0]=array[1];
	array[1]=temp;

}

void printArray(int array[]){
	int i=0;
	for(i=0; i<2; i++){
		printf("%d",array[i]);
	}
}
int main(){
	
	int n1,n2, array[2];
	scanf("%d %d",&n1,&n2);
	array[0]=n1;
	array[1]=n2;
	swapping(array);
	printArray(array);
	
}
