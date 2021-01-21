#include <stdio.h>
#include <conio.h>
int main(){
	int num,r,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	int i=num;
	while (num>0){
		r=num%10;
		sum=sum*10+r;
		num=num/10;
	}
	printf("%d\n",sum);
	if (sum==i){
		printf("Pelindrome");
	}
	else{
		printf("Not Pelindrome");
	}
}
