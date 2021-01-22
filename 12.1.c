#include<stdio.h>
#include<conio.h>
void countEven(int *arr, int a){
	int *i = arr,count=0;
	for(;i<arr+a;i++){
		if(*i % 2 == 0)
			count++;
	}
	printf("The number of even number in the array is %d",count);
}
int main(){
	int a,i;
	printf("Enter the number of array: ");
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		printf("Nhap phan tu %d cua array: ",i+1);
		scanf("%d",&arr[i]);
	}
	countEven(arr,a);
	getch();
	return 0;
}
