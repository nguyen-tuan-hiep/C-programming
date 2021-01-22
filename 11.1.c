/*	• Write a C program to input three integers. Set up a single pointer to point to each of these integers in turn. 
	Display the value dereferencing the pointer. */
#include<stdio.h>
int main(){
	int a[3];
	int * p = NULL;
	int i;
	p = a;
	for(p;p<=a+2;p++){
		scanf("%d",p);
	}
	for(p;p<=a+2;p++){
		printf("%d ",*p);
	}
	return 0;
}
