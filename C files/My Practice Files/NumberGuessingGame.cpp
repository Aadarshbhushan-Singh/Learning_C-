#include <stdio.h>
#include <conio.h>
int main(){
	int number=5;
	int guess,i=0;
	
	while (i<3){
		printf("Enter your number: ");
		scanf("%d",&guess);
		if (number==guess){
			printf("You Won!");
			break;
		}
		i=i+1;
	}
	if (number!=guess){
		printf("You Lost the game!");
	}
	
	
	return 0;
}
