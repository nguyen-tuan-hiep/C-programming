#include<stdio.h>
void sort(int a[], int n){
	int temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Descending order:\n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void oddSort(int a[], int n){
	int temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("Descending order for odd numbers:\n");
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			printf("%d ",a[i]);
		}
	}
}
int main(){
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the number of order %d: ",i+1);
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("\n");
	oddSort(a,n);
	return 0;
} 
