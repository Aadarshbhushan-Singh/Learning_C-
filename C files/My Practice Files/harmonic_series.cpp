#include <stdio.h>
#include <conio.h>
int main(){
	int num,i;
	float sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	for (i=1; i<=num; i++){
		printf("1/%d + ",i);
		sum=sum+(1/float(i));
	}
	printf("\n");
	printf("The sum upto the given term is: %f",sum);
	
	return 0;
}

