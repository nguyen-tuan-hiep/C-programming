#include<stdio.h>
#include<limits.h>
int main(){
	int j;
	long int k;
	float x;
	double z;
	printf("Enter an integer (between %i and %i): ", INT_MIN, INT_MAX);
	scanf("%i", &j);
	printf("You entered %d\n\n", j);
	printf("Enter a long integer (between %ld and %ld): ", LONG_MIN, LONG_MAX);
	scanf("%ld", &k);
	printf("You entered %li\n\n", k);
	printf("Enter a floating point number: ");
	scanf("%f", &x);
	printf("You entered %20.10E\n\n", x);
	printf("Enter a double precision floating point number: ");
	scanf("%lf", &z);
	printf("You entered %20.10E\n\n", z);
	puts("\n\nTry again: enter invalid data and see what happens!");
	return 0;
}
