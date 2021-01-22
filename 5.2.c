#include <stdio.h>
int main(){
	int a, b, c;
	printf("Enter a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("The value of a > b is: \t\t%i\n", a > b);
	printf("The value of b < c is: \t\t%i\n", b < c);
	printf("The value of a + b >= c is: \t%i\n", a+b >= c);
	printf("The value of a - b <= b-c is: \t%i\n", a-b <= b-c);
	printf("The value of b - a == b - c is: %i\n", b-a == b-c);
	printf("The value of a * b != c * c is: %i\n", a*b < c*c);
	return 0; 
}
