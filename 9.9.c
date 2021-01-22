#include<stdio.h>
void isLeapYear(int n){
	if((n%4==0 && n%100!=0)||n%400==0){
		printf("It is a leap year.");
	}
	else{
		printf("It is not a leap year.");
	}
}
int main(){
	int n;
	printf("Enter a year: ");
	scanf("%d",&n);
	isLeapYear(n);
	return 0;
}
