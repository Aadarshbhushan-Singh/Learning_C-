#include <stdio.h>
#include <stdlib.h>
int main(){
	//use of malloc
//	int* ptr;
//	ptr= (int*) malloc(3*sizeof(int)); //only 3 array can be used
//	for (int i=0; i<3; i++){
//		printf("Enter the value of %d of this array. ",i+1 ); 
//		scanf("%d",&ptr[i]);
//	}
//	for (int i=0; i<3; i++){ // if i<4 is used ten garbage value will be produced
//		printf("The value of %d ptr is %d\n",i+1, ptr[i]);
//	}
	
	
	
	//use of calloc
	int* ptr;
	ptr= (int*) calloc(3,sizeof(int)); //only 3 array can be used
	for (int i=0; i<3; i++){
		printf("Enter the value of %d of this array. ",i+1 ); 
		scanf("%d",&ptr[i]);
	}
	for (int i=0; i<3; i++){ // if i<4 is used ten garbage value will be produced
		printf("The value of %d ptr is %d\n",i+1, ptr[i]);
	}
	
	//use of realloc
	int n;
	printf("Enter the size of new array you want to create: \n");
	scanf("%d",&n);
	ptr= (int*) realloc(ptr, n*sizeof(int)); //only 3 array can be used
	for (int i=0; i<n; i++){
		printf("Enter the value of %d of this array. ",i+1 ); 
		scanf("%d",&ptr[i]);
	}
	for (int i=0; i<n; i++){ // if i<4 is used ten garbage value will be produced
		printf("The value of %d ptr is %d\n",i+1, ptr[i]);
	}
	 
	
	
	return 0;
}
