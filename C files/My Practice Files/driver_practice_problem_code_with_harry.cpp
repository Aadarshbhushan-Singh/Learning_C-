#include <stdio.h>
struct driver_details{
	char name[25];
	int driver_licence;
	char route[25];
	int kms;
};
struct driver_details dr1;
int main(){
	printf("Enter the details of driver: \n\n");
	printf("Enter the name of driver: ");
	scanf("%s",&dr1.name);
	printf("Enter the driver licence: ");
	scanf("%d",&dr1.driver_licence);
	printf("Enter the route: ");
	scanf("%s",&dr1.route);
	printf("Enter the kms: ");
	scanf("%d",&dr1.kms);
	printf("\nThe name of the driver is: %s and driving licence is: %d.\n",dr1.name, dr1.driver_licence);
	printf("The route is: %s and the number of kms is: %d\n.",dr1.route, dr1.kms);
	return 0;
}
