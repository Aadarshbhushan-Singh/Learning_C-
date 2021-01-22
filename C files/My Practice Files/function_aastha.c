#include <stdio.h>
void printBday(char name[10]){
	printf("Happy Birthday %s",name);
}

int sum(int a, int b){
	int sum_numbers=a+b;
	return sum_numbers;
}


int changeNumber(int x){
	x=x+3;
	return x;
}


int main(){
	printBday("Aadarsh");
	
	int result=sum(10,5);
	
	int final_result=result*2;
	printf("%d", final_result);
	
	int m=10;
	changeNumber(m);
	
	printf("\n%d",m);
	
	
	
	return 0;
}
