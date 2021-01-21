#include <stdio.h>
int main()
{
 int n,p1,p2,temp,i,j,a[5];
  scanf("%d",&n);
  scanf("%d",&p1);
  scanf("%d",&p2);
 j=1;
for(i=n;i>0;i/=10,j++)
        a[5-j]=i%10;
for(i=0;i<=9;i++)
       {
          a[p1-1]=i;a[p2-1]=i;
          temp=a[0]*10000+a[1]*1000+a[2]*100+a[3]*10+a[4];
printf("%d\n",temp);
}
return 0;
}

//Algorithm
/*
declear int -> number, position, iteration variable, array of size(5)
take_input(number, position)
declear j=1;
for(i=num; i>0; i>=remainder after division by 10; increase value of j)
 	array[5-j]=i modulo 10
//change the value from 00-99
for(i = 0 till 9)
	array(positon1-1)=i
	array(position2-1)=i
	calculate the value of final integer
	print(calclated integer)



*/
