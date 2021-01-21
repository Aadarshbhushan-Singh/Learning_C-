#include <stdio.h>
#include <conio.h>
int main()
{
	int one=0, two=0, five=0, ten=0, twenty=0, fifty=0, hundred=0, fivehundred=0, thousand=0;
	int amount,a;
	printf("Enter the amount: ");
	scanf("%d",&amount);
	if (amount>=1000){
		a=amount/1000;
		thousand=thousand+a;
		amount=amount%1000;
	}
	if (amount>=500){
		a=amount/500;
		fivehundred=fivehundred+a;
		amount=amount%500;
	}
	if (amount>=100){
		a=amount/100;
		hundred=hundred+a;
		amount=amount%100;
	}
	if (amount>=50){
		a=amount/50;
		fifty=fifty+a;
		amount=amount%50;
	}
	if (amount>=20){
		a=amount/20;
		twenty=twenty+a;
		amount=amount%20;
	}
	if (amount>=10){
		a=amount/10;
		ten=ten+a;
		amount=amount%10;
	}if (amount>=5){
		a=amount/5;
		five=five+a;
		amount=amount%5;
	}
	if (amount>=2){
		a=amount/2;
		two=two+a;
		amount=amount%2;
	}
	if (amount>=1){
		a=amount/1;
		one=one+a;
		amount=amount%1;
	}
	printf("One: %d\n",one);
	printf("Two: %d\n",two);
	printf("Five %d\n",five);
	printf("Ten: %d\n",ten);
	printf("Twenty: %d\n",twenty);
	printf("Fifty %d\n",fifty);
	printf("Hundred %d\n",hundred);
	printf("Five Hundred %d\n",fivehundred);
	printf("Thousands %d",thousand);
	

	return 0;
}
