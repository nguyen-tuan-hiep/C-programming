/*	• To increase salary for an employee, write a function incomeplus that is based on the current salary and the
	number of years passed from the beginning years (must > 3) of current salary.
	• Test it in a program. */
#include<stdio.h>
#include<conio.h>
int incomeplus(int n,long int *curSalary){
	for(n;n>3;n--){
		*curSalary += 500000;
	}
	return *curSalary;
}
int main(){
	long int curSalary=10000000;
	int n;
	printf("Enter the number of years: ");
	scanf("%d",&n);
	printf("%d",incomeplus(n,&curSalary));
	getch();
	return 0;
}
