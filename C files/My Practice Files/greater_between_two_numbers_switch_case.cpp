#include <stdio.h>
#include <conio.h>
int main(){
	int num1;
	int num2;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	switch(num1 > num2){
		case 1:
			printf("First number is greater.");
			break;
		case 0:
		printf ("Second number is greater.");
		break;
	}
	return 0;
}
