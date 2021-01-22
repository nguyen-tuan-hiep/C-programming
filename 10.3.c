#include<stdio.h>
int main(){
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n], b[n];
	for(i=0;i<n;i++){
		printf("Enter the number of order %d in array 1: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("Enter the number of order %d in array 2: ",i+1);
		scanf("%d",&b[i]);
	}
	int dem=0,out;
	for (i=0;i<n;i++){
	    if (a[i] == b[i])
	       dem++;
	}
	out = (dem == n) ? 1:0;
	printf("%d",out);
	return 0;
}
