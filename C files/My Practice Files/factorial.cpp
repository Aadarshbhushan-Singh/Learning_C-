#include <stdio.h>
#include <conio.h>
int main(){
	int num,product=1,i;
	printf("Enter the number: ");
	scanf("%d",&num);
	for (i=0; i<num; i++){
		product=product*(num-i);
	}
	printf("The factorial is: %d",product);
	
	return 0;
}
