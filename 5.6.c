#include <stdio.h>
int main(){
	long int n;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	printf("The number of students in the smallest class is: %d \n", n/7);
	printf("The number of students in the largest class is: %d \n", (n+6)/7);
	printf("The average number of students per class is: %d \n", n/7);
	printf("The number of classes above average size is: %d \n", n%7);
	printf("The number of classes of at most average size is: %d \n", 7-n%7);
	printf("The number of students in classes of larger than average size is: %d \n", (n%7)*((n+6)/7));
	return 0;
}
