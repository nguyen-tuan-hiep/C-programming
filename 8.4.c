  
#include <stdio.h>
int main(){
	double total_pay; 
	int count_emp; 
	int number_emp; 
	double hours;
	double rate;
	double pay; 
	printf("Enter number of employees> ");
	scanf("%d", &number_emp);
	total_pay = 0.0;
	count_emp = 0;
	while (count_emp < number_emp) {
		printf("Hours> ");
		scanf("%lf", &hours);
		printf("Rate > $");
		scanf("%lf", &rate);
		pay = hours * rate;
		printf("Pay is $%6.2f\n\n", pay);
		total_pay = total_pay + pay;
		count_emp = count_emp + 1;
	}
	printf("All employees processed\n");
	printf("Total payroll is $%8.2f\n", total_pay);
	return 0;
}
