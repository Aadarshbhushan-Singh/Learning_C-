#include <stdio.h>
#include <conio.h>
int main(){
	int a;
	int num;
	int sum=0;
	printf ("Enter the number: ");
	scanf("%d",&num);
	for (a=1; a<num+1; a++){
		sum=sum+a;
	}
	printf("The sum of first %d natural number is %d.",num,sum);
	return 0;
}
