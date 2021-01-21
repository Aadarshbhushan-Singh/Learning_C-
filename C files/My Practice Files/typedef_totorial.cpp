#include <stdio.h>
#include <string.h>
//struct employee{
//	char name[34];
//	int id;
//};

typedef struct  employee{
	char name[34];
	int id;
} emp; //emp is the new name to struct employee

int main(){
	struct employee emp1, emp2; //instead of struct employee emp can be used.
	strcpy(emp1.name,"aadarsh");
	emp1.id=10;
	strcpy(emp2.name,"Pranjal");
	emp2.id=20;
	printf("Employee id and name is: %d %s.",emp1.id, emp1.name);
	
	emp emp3; //emp can be used instead of struct employee as in upper code
	emp3.id=45;
	printf("\nPrinting using emp: %d",emp3.id);
	
		
//	typedef unsigned long ul;
//	ul l1, l2, l3;
//	typedef int integer;
//	integer a=21;
//	printf("%d",a);
}
