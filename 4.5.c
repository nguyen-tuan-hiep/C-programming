#include <stdio.h>
#define PI 3.14
int main(){
	double r;
	printf("Enter the radius of a circle: ");
	scanf("%lf",&r);
	printf("The area of the circle is %.2lf\n", PI*r*r);
	printf("The circumference of the circle is %.2lf\n", 2*PI*r);
	printf("The area of the sphere is %.2lf\n",4*PI*r*r);
	printf("The volume of the sphere is %.2lf\n", 4.0/3 * PI*r*r*r);

	return 0;
}
