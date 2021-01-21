#include <stdio.h>
#include <conio.h>
int main(){
	int num,i;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Upto n: ");
	for(i=0; i<=num; i=i+2){
		printf("%d ",i);
	}
	
	return 0;
}
