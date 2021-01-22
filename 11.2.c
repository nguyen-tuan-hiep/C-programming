/*	• Write a program that prints out the address (in hexadecimal format) of first 5 elements of the array predefined as below:
	int a[7]= {13, -355, 235, 47, 67, 943, 1222} ; */
#include<stdio.h>
#include<conio.h>
int main(){
	int a[7] = {13, -355, 235, 47, 67, 943, 1222};
	printf("address of first five elements in memory:\n");
	int i;
	for(i=0;i<5;i++){
		printf("%x\t\t\t",&a[i]);
	}	
	printf("\n");
	for (i=0; i<5;i++)
		printf("%p\t",&a[i]);	
	return 0;
}
