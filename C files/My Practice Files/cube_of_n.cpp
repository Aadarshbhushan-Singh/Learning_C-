#include <stdio.h>
#include <conio.h>
int main(){
	int input,i,cube;
	printf("Enter how many numbers: ");
	scanf("%d",&input);
	for (i=1; i<input+1; i++){
		cube=i*i*i;
		printf("The cube of %d is %d\n",i,cube);
	}
	return 0;
}
