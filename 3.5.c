#include <stdio.h>
int main() {
	int a,b,c;
	int sum;
	printf("Enter days of overnight: ");
	scanf("%d",&a);
	printf("Enter days of three-days: ");
	scanf("%d",&b);
	printf("Enter the days of weekly: ");
	scanf("%d",&c);
	printf("The total cost is %d dollars.",a*7+b*5+c*3);
	return 0;
}
