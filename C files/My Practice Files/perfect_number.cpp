#include <stdio.h>
#include <conio.h>
int main(){
	int num, factor, i;
	printf("Enter the number: ");
	scanf("%d",&num);
	for (i=1; i<num; i++){
		if (num%i==0){
			factor+=i;
		}
	}
	if (factor==num){
		printf("%d is perfect.",num);
	}
	else{
		printf("%d is not a perfect number.",num);
	}
	return 0;
}
