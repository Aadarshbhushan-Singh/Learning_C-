#include <stdio.h>
#include <conio.h>
int main(){
	int table, num, i, product;
	printf("Which number's table? ");
	scanf("%d",&table);
	printf("Upto what number? ");
	scanf("%d",&num);
	for (i=1; i<num+1; i++){
		product=table*i;
		printf("%d * %d = %d\n",table,i,product);
	}
	return 0;
}
