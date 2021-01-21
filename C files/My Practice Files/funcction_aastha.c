#include<stdio.h>
void show(int a[])
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
}
void showChar(char b[])
{
	int j;
	int len_array=sizeof(b)/sizeof(char);
	for(j=0;j<len_array;j++)
	{
		printf("%c ",b[j]);
	}
}
int main()
{
	int a[5]={1,2,3,4,5};
	char b[5]={'a','b','c','d','e'};
	char c[6]={'m','n','o','p','q','r'};
	
	show(a);
	showChar(b);
	showChar(c);
	
	return 0;
}
