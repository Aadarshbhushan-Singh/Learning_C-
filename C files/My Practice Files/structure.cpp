#include <stdio.h>
#include <string.h>
void print();
struct student{
	int id;
	int marks;
	char fav_char;
	char area[25];
};
struct student harry, ravi, shubham;
int main(){
	
	harry.id=1;
	ravi.id=2;
	shubham.id=3;
	harry.marks=90;
	ravi.marks=80;
	shubham.marks=70;
	harry.fav_char='p';
	ravi.fav_char='p';
	shubham.fav_char='p';
	strcpy(harry.area,"Biratnagar");
	printf("Harry got %d marks.\n",harry.marks);
	printf("\n%s",harry.area);
	print();	
	
	
}
void print(){
	printf("\n%d",harry.id);
}
