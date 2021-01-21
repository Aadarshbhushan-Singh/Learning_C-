#include <stdio.h>
#include <conio.h>
//Giving manual input.

/*void calculator_01(double num1, double num2, char op){
	if (op=='+'){
		printf("The sum is %f.",num1+num2);
	}else if (op=='-'){
		printf("The difference is %f.",num1-num2);
	}else if (op=='*'){
		printf("The product is %f.",num1*num2);
	}else if(op=='/'){
		printf("The quotient is %f.",num1/num2);
	}
}
*/
double calculator_02(){
	float num1;
	char op;
	float num2;
	printf("Number_01: ");
	scanf("%f",&num1);
	printf("Operator: ");
	scanf("%s", &op);
	printf("Number_02: ");
	scanf("%f",&num2);
	if (op=='+'){
		printf("%f + %f = %f",num1, num2, num1+num2);
	}else if(op=='-'){
		printf("%f - %f = %f",num1, num2,num1-num2);
	}else if (op=='*'){
		printf("%f * %f = %f",num1, num2,num1*num2);
	}else if(op=='/'){
		printf("%f / %f = %f",num1, num2,num1/num2);
	}else{
		printf("Invalid Operator");
	}
}
int main(){
	calculator_02();
//	calculator_01(2,1,'/');
	return 0;
}
