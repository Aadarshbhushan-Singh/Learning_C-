#include <stdio.h>
#include <conio.h>
int main(){
	int num,r, i=1,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	i=num;
	while (num>0){
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	if (sum==i){
		printf("%d a armstrong number.",i);
	}
	else{
		printf("%d is not armstrong number.",i);
	}
	
		
	
	
	
	
	return 0;
}
