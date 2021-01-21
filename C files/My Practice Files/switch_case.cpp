#include <stdio.h>
#include <conio.h>
int main(){
	int number;
	printf("Enter the number: ");
	scanf ("%d",&number);
	switch(number){
		//1,2,3, are not the case number. Rather they are the number that is to be taken as an input.
		case 1:
			printf("The day is sunday");
			break;
		case 2:
			printf("The day is Monday");
			break;
		case 3:
			printf("The day is Tuesday");
			break;
		case 4:
			printf("The day is Wednesday");
			break;
		case 5:
			printf("The day is Thursday");
			break;
		case 6:
			printf("The day is Friday");
			break;
		case 7:
			printf("The day is Saturday");
		default:
			printf("Invalid Option given");
	}
	printf("\n");
	char grade='A';
	
	switch (grade){
		case 'A':
			printf("You have got grade A.");
			break;
		case 'B':
			printf("You have got grade B.");
			break;
		case 'C':
			printf("You have got grade C.");
			break;
		case 'D':
			printf("You have got grade D.");
			break;
		default:
			printf("Invalid Grade!");
	}
	
	
	return 0;
}
