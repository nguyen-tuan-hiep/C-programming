#include <stdio.h>
#include <limits.h>
int main(){
	unsigned int x = UINT_MAX - 1;
	signed int y = INT_MAX - 1;
	printf("x is an unsigned int, occupying %d bytes.\n\n",sizeof(x));
	printf("The initial value of x is %u\n", x);
	x++;
	printf("Add 1; the new value of x is %u\n", x);
	x++;
	printf("Add 1; the new value of x is %u\n", x);
	x++;
	printf("Add 1; the new value of x is %u\n", x);
	printf("\ny is a signed int, occupying %d bytes.\n\n",sizeof(y));
	printf("The initial value of y is %d\n", y);
	y++;
	printf("Add 1; the new value of y is %d\n", y);
	y++;
	printf("Add 1; the new value of y is %d\n", y);
	y++;
	printf("Add 1; the new value of y is %d\n", y);
	return;
}
