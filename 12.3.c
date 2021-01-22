/*	Write a function getSale using a pointer to accept the address of an array. It asks the user to enter 
	the sales figures and stores those figures in the array. Write a function totalSale return the total of 
	the element int the array. Use these two functions in a program to input the sales figure from different 
	quarteurs and display the total. Using pointers instead of array in function's parameters. */
#include<stdio.h>
void getSale(float a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
}
float totalSale(float *a, int n){
	int sum = 0;
	float *i = a;
	for(i;i<a+n;i++){
		if(*i == (int)(*i) ){
			sum += (int)(*i);
		}
	}
	return sum;
}
int main(){
	int n;
	printf("Enter the number of sale figure: ");
	scanf("%d",&n);
	float a[n];
	getSale(a,n);
	printf("%f",totalSale(a,n));
	return 0;
}
