/*	• Write a function that takes three variable (a, b, c) in as separate parameters and rotates the values
	stored so that value a goes to b, b to c and c to a. Test this function in a program. */
#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b, int *c){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	temp = *b;
	*b = *c;
	*c = temp;
	printf("%d %d %d",*a,*b,*c);
}
int main(){
	int a,b,c;
	printf("Enter a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	swap(&a,&b,&c);
	getch();
	return 0;
}
