#include <stdio.h>
#include <math.h>
int main(){
	float a;
	int b,c,alpha;
	scanf("%d %d %d",&b, &c, &alpha);
	alpha = alpha * ( M_PI / 180.0 );
	a=sqrt(b*b+c*c+cos(alpha));
	printf("%.2f",a);
	return 0;
}
