#include <stdio.h>
#include <conio.h>
int main(){
	int num,i;
	printf("Enter upto how many numbers? ");
	scanf("%d",&num);
	for (i=1; i<num+1;i++){
		printf("%d\n",i*2-1);
	}
	return 0;
}
