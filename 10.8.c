/*	• Write a function that reverse the array content. 
	  Use this function in a program that asks user to enter a list of floating numbers.
	• Then reverse all these numbers without creating another array. */
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	float a[n];
	for(i=0;i<n;i++){
		printf("Enter the element of order %d in the array: ",i+1);
		scanf("%f",&a[i]);
	}
	printf("The array is:\t\t");
	for(i=0;i<n;i++){
		printf("%.2f  ",a[i]);
	}
	printf("\nThe reverse array is:\t");
	for(i=n-1;i>=0;i--){
		printf("%.2f  ",a[i]);
	}
	getch();
	return 0;
}
