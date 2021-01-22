/* Write a program to list all the sub array of an given array. For example the array 1 3 4 2 has the following sub array:	*/
#include<stdio.h>
int main(){
	int a[100],n,i,j,k;
	printf("n = "); 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter element of order %d: ",i+1);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			printf("\n");
			for(k=i;k<=j;k++)
				printf("%d\t",a[k]);
		}
	}
	return 0;
}
