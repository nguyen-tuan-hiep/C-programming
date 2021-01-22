#include<stdio.h>
double celsius(int n){
	return (5.0/9.0)*(n-32);
}
void change(int n){
	int i=0;
	printf("\n");
	printf("***** A table to convert Fahrenheit to Celsius *****\n");
	for(i=0;i<=20;i++){
		printf("%2d degree Fahrenheit = %10.5lf degree Celsius\n",i,(5.0/9.0)*(i-32));
	}
}
int main(){
	int n;
	printf("Enter a temperature in Fahrenheit: ");
	scanf("%d",&n);
	printf("The temperature in Celsius is: %8lf\n", celsius(n));
	change(n);
	return 0;
}
