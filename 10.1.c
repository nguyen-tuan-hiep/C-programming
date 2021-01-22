/*	1) Write a program to input an array
	that stores 100 integers.
	a) Find the sum of all odd numbers in the
	array
	b) Find the minimum value. */

#include<stdio.h>
#include<conio.h>
int main(){
	int array[10];
	int i, min=0,sum=0;
	for(i=0;i<10;i++){
		printf("Enter the number of order %d: ",i+1);
		scanf("%d",&array[i]);
		if(array[i]%2==1){
			sum += array[i];
		}
		if(min>array[i]){
			min = array[i];
		}
	}
	printf("The sum of all odd numbers in the array is: %d",sum);
	printf("\nThe minimum value of the array is: %d",array[i]);
	getch();
	return 0;
}
