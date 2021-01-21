#include <stdio.h>
#include <conio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	int result=num%2;
	switch(result){
		case 0:
			printf("Even");
			break;
		default:
			printf("Odd");
	}
	return 0;
}
