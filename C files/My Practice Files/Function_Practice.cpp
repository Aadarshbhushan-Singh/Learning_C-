#include <stdio.h>
#include <conio.h>
#include <math.h>
void PrintName(char name[]){
	printf("Hi! My name is %s.\n",name);
}
void square(int num){
	printf("The square of %d is %.0f \n",num, pow(num,2));
	printf("The cube of %d is %.0f.\n",num, pow(num,3));
	printf("\n");
}
void max_min(int num1, int num2){
	if (num1>num2){
		printf("%d is Maximum.\n",num1);
	}else{
		printf("%d is Maximum.\n",num2);
	}
	printf("\n");
}
void circle(int rad){
	double pi = 2 * acos(0.0);
	printf("The diameter of circle is %.2f.\n",rad*2.0);
	printf("The perimeter of circle is %.2f.\n",(2*pi*rad));
	printf("The area of circle is %.2f.\n",(pi*rad*rad));
	printf("\n");
}
int main(){
	PrintName("Aadarsh");
	PrintName("Rohit");
	PrintName("Suvham");
	square(20);
	square(40);
	max_min(23,45);
	max_min(12,3);
	circle(7);
	circle(14);
	return 0;
}
