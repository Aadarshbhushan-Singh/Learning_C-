#include <stdio.h>
#include <conio.h>
int main(){
	int sum=0, a, i,b;
	printf("How many numbers? ");
	scanf("%d",&a);
	for(i=1; i<a+1; i++){
		printf ("Enter num%d: ",i);
		scanf("%d",&b);
		sum=sum+b;
	}
	printf("The sum is %d\n",sum);
	int average=sum/a;
	printf("The average is %d",average);
	
	return 0;
}
