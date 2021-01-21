#include <stdio.h>
#include <conio.h>
int main(){
	int days_input, year, remaining_days_01, month, remaining_days_02;
	printf("Enter the days: ");
	scanf("%d",&days_input);
	year=days_input/365;
	remaining_days_01=days_input%365;
	month=remaining_days_01/30;
	remaining_days_02=remaining_days_01%30;
	printf("%d %d %d",year, month, remaining_days_02);	
	
	return 0;
}
