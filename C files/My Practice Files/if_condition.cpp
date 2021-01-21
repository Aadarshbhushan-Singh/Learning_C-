#include <stdio.h>
#include <conio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if (age>=18){
		printf("You are a voter.\n");
	}else{
		printf ("You are not a voter.\n");
	}
	printf("The person is %d years old.",age);
	return 0;
}
