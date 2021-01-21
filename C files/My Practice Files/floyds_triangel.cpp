#include <stdio.h>
#include <conio.h>
int main(){
	int num,i,j;
	printf("Enter the number of row: ");
	scanf("%d",&num);
	for (i=1; i<=num; i++){
		if (i==1){
			printf("%d",1);
		}
		for (j=1; j<i; j++){
			if (i%2==0){
			printf("%d",0);
			printf("%d",1);}
			else{printf("%d",1);
			printf("%d",0);
			}
			
		}
		printf("\n");
		
	}
	return 0;
}
