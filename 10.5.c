/* 	Given an integer array:
	a) Count the number of the number 0 in this array.
	b) Find the length of the subsequence that consists the consecutive numbers (all of elements are number 0).
	c) Find the time of appearance of numbers. */
#include<stdio.h>
#include<conio.h>
int main(){
	int n,m,i,j;
	printf("Enter n: ");
	scanf("%d",&n);
	int a[n], count =0;
	for(i=0;i<n;i++){
		printf("Enter the element of order %d: ",i+1);
		scanf("%d",&a[i]);
		if(a[i]==0){
			count ++;
		}
	}
	printf("a, The number of element equals 0 in this array is: %2d\n",count);
	printf("c, The time of appearance of numbers:\n");
	for(m=0;m<10;m++){
		count = 0;
		for(i=0;i<n;i++){
			if(a[i]==m){
				count++;
			}
		}
	printf("Number %d appears %d times.\n",m,count);
	}
	return 0;
}
