#include <stdio.h>
#include <conio.h>
int main(){
	int i, roll[10];
for (i=1; i<11; i++){
		printf("Enter the roll[%d]: ",i);
		scanf("%d",&roll[i]);
	}
for (i=1; i<11; i++){
		printf ("The roll[%d] is %d\n",i,roll[i]);
	}	
    return 0;
}
