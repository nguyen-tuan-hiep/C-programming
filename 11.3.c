/*	• Write a program asking the value from user for 3 float variable a, b, c.
	Then add 100 to the content of them by using just a pointer. */
#include<stdio.h>
#include<conio.h>
int main(){
	float a,b,c;
	float *ptr;
	printf("Enter a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	ptr = &a;		//Store the address of a in ptr
	*ptr += 100;
	ptr = &b;		//Store the address of b in ptr
	*ptr += 100;
	ptr = &c;		//Store the address of c in ptr
	*ptr += 100;
	printf("The new value of a,b,c is: %f, %f, %f\n",a,b,c);
	getch();
	return 0;
}
