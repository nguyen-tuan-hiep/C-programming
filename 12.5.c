  
/* Write a program to reverse an array in two different ways: using indexes and using pointers. */
#include<stdio.h>
void reverseArray1(int a[], int n){
	int temp;
	int i;
	for(i=0;i<n;i++){
		printf("Enter the element of order %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++){
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void reverseArray2(int *a, int n){
	int i=0, temp;
	for(i=0;i<n/2;i++){
		temp = *(a+i);
		*(a+i) = *(a+n-i-1);
		*(a+n-i-1) = temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	reverseArray1(a,n);
	printf("\n");
	reverseArray2(a,n);
	return 0;
}
