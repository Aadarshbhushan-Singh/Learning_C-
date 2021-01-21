#include <stdio.h>
#include <conio.h>
int main(){
	int mn,mx,n,i,sum;
	printf("Enter the first number: ");
	scanf("%d",&mn);
	printf("Enter the last number: ");
	scanf("%d",&mx);
	for(n=mn;n<=mx;n++){
	    i=1;
	    sum = 0;
	    while(i<n){
	      if(n%i==0)
	           sum=sum+i;
	          i++;
	    }
	    if(sum==n)
	      printf("%d ",n);
	  }
	      printf("\n");
}
		
