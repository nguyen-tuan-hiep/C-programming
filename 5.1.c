#include <stdio.h>
int main(){
	double mile, km;
	printf("Enter the distance in kilometers: ");
	scanf("%lf", &km);
	mile = 1000 * km;
	printf("That equals %.2f miles.\n", mile);
	return 0;
}
