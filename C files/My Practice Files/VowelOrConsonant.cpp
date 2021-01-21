#include <stdio.h>
#include <conio.h>
int main()
{

	char InputChar;
	printf("Enter the character: ");
	scanf("%c",&InputChar);
	if (InputChar=='a' || InputChar=='e' || InputChar=='i' || InputChar=='o' || InputChar=='u' ||
		InputChar=='A' || InputChar=='E' || InputChar=='I' || InputChar=='O' || InputChar=='U'){
			printf("Vowel");
		}else if (InputChar>='a' && InputChar<='z' || InputChar>='A' && InputChar<='Z'){
			printf("Consonant");
		}else{
			printf("Not an alphabet.");
		}
		
		
	return 0;
}
