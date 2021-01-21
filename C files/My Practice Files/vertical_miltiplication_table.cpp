#include <stdio.h>
#include <conio.h>
int main(){
	int num,i,j,product1, product2;
	printf("Multiplication table from 1 to: ");
	scanf("%d",&num);
	for (i=1; i<11; i++){
		for (j=1; j<num+1; j++){
			product1=i*j;
			printf("%d * %d = %d, ",j,i,product1);
		}
		printf("\n");
	}
	return 0;
}
