#include <stdio.h>
#include <string.h>
main(){
	int decimal;
	printf("Enter the decimal number: ");
	scanf("%d",&decimal);
	int binary[100];
	int i=0;
	while (decimal!=0){
		int a=decimal%2;
		binary[i]=a;
		i=i+1;
		decimal=decimal/2;
	}
	printf("Binary: ");
	for (int j=i-1; j>-1; j--){
		printf("%d",binary[j]);
	}
	return 0;
}
