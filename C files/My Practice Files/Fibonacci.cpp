#include <stdio.h>
#include <conio.h>
int main(){
	int num, i,a=0,b=1,c;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("%d  ",a);
	printf("%d ",b);
	for (i=1; i<=num; i++){
		printf("%d ",a+b);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
