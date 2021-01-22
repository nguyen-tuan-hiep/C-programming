/*	• Input an array with the number of element n asked from user. Check to see whether the array is symmetric. */
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the element of order %d in the array: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0,j=n-1; i<n,j>=0; i++,j--){
		if(a[i]!=a[j]){
			printf("This array is not symmetric.");
			getch();
			return 0;
		}
	}
	printf("This array is symmetric.");
	getch();
	return 0;
}
