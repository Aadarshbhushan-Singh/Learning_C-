#include <stdio.h>
#include <conio.h>
#include <math.h>
void hello_function(char name[], int age){  //void doesn't return anything. Instead of void double, float, int can be used.
	printf("Hello world!\n");
	printf("My name is %s. I am %d years old.\n", name, age);
}
float square(float number){
	float result=pow(number, 2);
	return result;
}
float cube(float number){
	float result=pow(number,3);
	return result;
}
int main()
{
	hello_function("Aadarsh", 20); //Calling the function and passing parameters into it.
	printf("The square of %f is %f and cube is %f.", 7.0, square(7), cube(7));
	return 0;
}
