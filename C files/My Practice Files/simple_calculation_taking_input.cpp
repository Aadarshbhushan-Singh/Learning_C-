#include <stdio.h>
#include <conio.h>
int main(){
	int num1;
	int num2;
	printf ("Enter first number:");
	scanf ("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	int sum=num1+num2;
	printf ("The sum of first and second number is: %d\n",sum);
	int num3;
	int num4;
	printf("Enter the third number: ");
	scanf("%d",&num3);
	printf("Enter the fourth number: ");
	scanf("%d",&num4);
	int difference=num3-num4;
	printf("The difference of num3 and num4 is: %d",difference);
		
	return 0;
}
