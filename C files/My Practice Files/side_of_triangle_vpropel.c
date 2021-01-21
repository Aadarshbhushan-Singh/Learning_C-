#include <stdio.h>
#include <math.h>
int main(){
	float a, alpha;
	int b,c;
	scanf("%d %d %f",&b, &c, &alpha);
	alpha = alpha * ( M_PI / 180);
	a=sqrt(b*b+c*c+cos(alpha));
	printf("%.2f",a);
	return 0;
}
