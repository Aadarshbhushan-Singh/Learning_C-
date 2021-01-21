#include <stdio.h>
#include <conio.h>
struct details{
	int rollNo;
	char name[20];
	int age;
};
main(){
	int num;
	printf("Enter the number of students: ");
	scanf("%d",&num);
	struct details s[10];
	for (int i=0; i<num; i++){
		printf("Roll No of student %d: ",i+1);
		scanf("%d",&s[i].rollNo);
		printf("Name of student %d: ",i+1);
		scanf("%s",&s[i].name);
		printf("Age of student %d: ",i+1);
		scanf("%d",&s[i].age);
	}
	//Not printing the firse element
	printf("\n\n########################Output#########################\n");
	for (int i=1; i<num; i++){
		printf("Roll No of student %d is: %d.\n",i,s[i].rollNo);
		printf("Name of student %d is: %s\n",i,s[i].name);
		printf("Age of student %d is: %d\n",i,s[i].age);
	}
	getch();
	return 0;
}
