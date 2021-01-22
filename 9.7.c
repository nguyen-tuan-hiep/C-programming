  
#include<stdio.h>
#include<math.h>
long int figure(long int n){
	int a =log10(n);
	return a+1;
}
void check(int n){
	int count =0,even=0,odd=0;
	do{
		if(n%2==0){
			even ++;
		}else{
			odd ++;
		}
		n =n/10;
		count++;
	}while(n>0);
	if(count==even||count==odd){
		printf("n is a k-figure");
	}else{
		printf("n is not a k-figure");
	}
}
int main(){
	int n;
	printf(" Enter a positive number: ");
	scanf("%d", &n);
	printf("The number of figures: %d\n", figure(n));
	check(n);
	return 0;
}
