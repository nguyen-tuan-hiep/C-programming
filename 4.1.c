#include <stdio.h>
int main () {
	double x;
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	printf("The integer is %d\n\n", n);
	printf("Please enter a double: ");
	scanf("%lf", &x);
	printf("The double is %g\n\n", x);
	printf("Please enter an integer and a floating-point number:");
	scanf("%d%lf", &n, &x);
	printf("The numbers are %d and %g\n", n, x);
	return 0;
}
