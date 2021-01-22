#include<stdio.h>
#include<conio.h>
double salary(int n){
	if (n<=40){
		return n*15000;
	} 
	if (n>40){
		return 600000+(40-n)*22500;
	}
}
int main (){
	int n;
	do{
		printf("Enter the hours: ");
		scanf("%d",&n);
		if (n<10 || n>65){
			printf("Invalid input. Try again.\n");
		}
	}while(n<10 || n>65);
	printf("%lf",salary(n));
	getch();
	return 0;
}
