#include <stdio.h>
#include <conio.h>
int main(){
	int term,i,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&term);
	for (i=1; i<=term; i++){
		printf("%d ",i*i);
		sum=sum+i*i;
	}
	printf("\n");
	printf("The sum of square of %d terms is  %d.",term,sum);
	
	return 0;
}
