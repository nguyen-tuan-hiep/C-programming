  
//Given an array of which elements are the numbers inputed by user. 
//Find the sum of the local maximum numbers in this array.
//(local maximum element is the element that greater than its two neighbours)
#include<stdio.h>
#include<conio.h>
int main(){
	int a[5];
	int i,sum=0;
	for(i=1;i<=5;i++){
		printf("Enter the number of order %d: ",i);
		scanf("%d",&a[i]);
	}
	for(i=2;i<=6;i++){
		printf("The element of order %d is: %d\n",i-1,a[i]);
		if(a[i]>a[i-1] && a[i]>a[i+1]){
			sum += a[i];
		}
	}
	printf("Sum of local maximum numbers in this array is %d",sum);
	getch();
	return 0;
}
