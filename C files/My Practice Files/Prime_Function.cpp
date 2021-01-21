#include <stdio.h>
#include <conio.h>
#include <math.h>
int isPrime(int num){
	int i;
	for (i=2; i<num; i++){
		if (num%i==0){
			return 0;
		}
	}return 1;	
}

int main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	if (isPrime(num)){
		printf("Prime");
	}else{
		printf("Not Prime");
	}
	printf("\n%d",isPrime(num));
	return 0;
	
}
