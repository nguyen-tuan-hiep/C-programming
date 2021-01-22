  
#include<stdio.h>
double *maximum(double *arr, int n){
	double *max=arr;
	double *i=arr ;
	if(n == 0){
		return NULL;
	}else{
		for(;i<arr+n;i++){
			if(*max<*i){
				max = i;
			}
		}
		return max;
	}
}
int main(){
	int n,i;
	printf("Enter the number of array: ");
	scanf("%d",&n);
	double arr[n];
	for(i=0;i<n;i++){
		printf("Nhap phan tu %d cua array: ",i+1);
		scanf("%lf",&arr[i]);
	}
	printf("The maximum value of the array is %lf", *maximum(arr,n));
	return 0;
}
