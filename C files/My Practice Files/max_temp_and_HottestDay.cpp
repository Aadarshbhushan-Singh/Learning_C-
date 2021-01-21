#include <stdio.h>
#include <conio.h>
int main(){
	float temp[5],max;
	int i, hottest_day;
	for (i=0;i<5;i++){
		scanf("%f",&temp[i]);
	}
	max=temp[0];
	hottest_day=1;
	for (i=1;i<5;i++){
		if (max<temp[i]){
			max=temp[i];
			hottest_day=i+1;
		}
	}
	printf("Hottest day is: %d and max temp is %.2f",hottest_day, max); //%.2f limits the dicimal value to 2 digits
	return 0;
}
