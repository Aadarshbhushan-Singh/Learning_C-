#include <stdio.h>
#include <conio.h>
int main(){
	int num,i,j,k=1;
	printf("Enter the number: ");
	scanf("%d",&num);
	for (i=1; i<num; i++){
		for (j=1; j<=i; j++){
			printf("%d",k++);
		}
		printf("\n");
	}
	return 0;
}
