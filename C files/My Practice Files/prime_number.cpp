#include <stdio.h>
#include <stdio.h>
int main(){
	int num,i,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
	for (i=2; i<num; i++){
		if (num%i==0){
			sum+=1;
		}
	}
	if (sum==0){
		printf("%d is a prime number.",num);
	}
	else{
		printf("%d is not a prime number.",num);
	}
	return 0;
}
