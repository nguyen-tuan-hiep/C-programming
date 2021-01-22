/*	Introduce int variables x, y, z and int* pointer variables p, q, r. Set x, y, z to three distinct values. Set p, q, r to the
	addresses of x, y, z respectively.
	1) Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
	2) Swapping values of x, y, z. Print with labels the values of x, y, z, p, q, r, *p, *q, *r.
	3) Swapping values of p, q, r. Print with labels the values of x, y, z, p, q, r, *p, *q, *r.  */
#include<stdio.h>
#include<conio.h>
int x=10, y=15, z=20;
int *p,*q,*r;
void swap2(int *x, int *y, int*z){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	temp = *y;
	*y = *z;
	*z = temp;
	printf("2. The values of x, y, z, p, q, r, *p, *q, *r is: %d, %d, %d, %d, %d, %d, %d, %d, %d",*x, *y, *z, p, q, r, *p, *q, *r);
}
void swap3(int*i, int*j, int*k){
	int temp;
	temp = *i;
	*i = *j;
	*j = temp;
	temp = *j;
	*j = *k;
	*k = temp;
	
}
int main(){
	p = &x, q = &y, r = &z;
	printf("1. The values of x, y, z, p, q, r, *p, *q, *r is: %d, %d, %d, %d, %d, %d, %d, %d, %d",x, y, z, p, q, r, *p, *q, *r);
	printf("\n");
	swap2(&x,&y,&z);
	
	printf("\n");
	swap3(&p,&q,&r);
	printf("3. The values of x, y, z, p, q, r, *p, *q, *r is: %d, %d, %d, %d, %d, %d, %d, %d, %d",x, y, z, p, q, r, *p, *q, *r);
	getch();
	return 0;
}
