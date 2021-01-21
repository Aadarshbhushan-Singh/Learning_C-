#include <stdio.h>
#include <conio.h>
void prime_function(int a, int b){
	int i,j;
	for (i=a; i<=b; i++){
		int sum=0;
		for (j=1; j++; j<i){
			if (i%j==0){
				sum=sum+1;
			}
		}
		if (sum==0){
			printf("%d",i);
		}
		else{
			printf("No");
		}
	}
	
}

int main(){
	prime_function(1,25);
	return 0;
}
