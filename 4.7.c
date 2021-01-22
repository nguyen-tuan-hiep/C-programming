#include <stdio.h>
int main(){
	char ISBN[10];
	char title[10];
	double price;
	int quantity;
	printf("Enter ISBN: ");
	gets(ISBN);
	printf("Enter the title: ");
	gets(title);
	printf("Enter the price: ");
	scanf("%lf",&price);
	printf("Enter the quantity: ");
	scanf("%d",&quantity);
	printf("\n");
	printf("BK Bookseller\n");
	printf("Qty\tISBN\tTitle\t\t\tPrice\t\tTotal\n");
	printf("____________________________________________________________________\n");
	printf("%d\t%s\t%s\t\t%f\t%f\n",quantity,ISBN,title,price,price*quantity);
	printf("VAT: 4%%\n");
	printf("You pay: %f",0.04*price*quantity);
	return 0;
}
