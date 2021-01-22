#include <stdio.h>
int main(){
	int n, m, abs, max;
	printf("Enter a positive or negative integer: ");
	scanf("%d", &n);
	printf("\nYou entered %d.\n", n);
	abs = (n < 0) ? -n : n;
	printf("Its absolute value is %i.\n", abs);
	printf("\nEnter two integers (e.g. 1 2): ");
	scanf("%d %d", &n, &m);
	printf("\nYou entered %d and %d.\n", n, m);
	max = (n > m) ? n : m;
	printf("%d is the larger value.\n", max);
	return 0; 
}
