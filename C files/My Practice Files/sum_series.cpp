#include <stdio.h>
#include <conio.h>
int main(){
	int term,i,j,sum=0,t=9;
	printf("Enter the term: ");
	scanf("%d",&term);
	for (i=1; i<=term; i++){
		sum=sum+t;
		t=10*t+9;
		for (j=1; j<=i; j++){
		printf("%d",9);
		
		}
		printf(" ");

	}
	printf("%d",sum);
	
	
	return 0;
}
