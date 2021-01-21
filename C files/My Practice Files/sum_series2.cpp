#include <stdio.h>
#include <conio.h>
int main(){
	int term, i, j, sum=0,t=1;
	printf("Enter the number of terms: ");
	scanf("%d",&term);
	for (i=1; i<=term; i++){
		sum=sum+t;
		t=t*10+1;
		for (j=1; j<=i; j++){
			printf("%d",1);
		}
		printf(" ");
	}
	printf("\n");
	printf("Sum: %d",sum);
	
	
	
	
	
	return 0;
}
