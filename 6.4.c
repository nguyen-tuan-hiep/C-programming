#include <stdio.h>
int main(){
	int age; 
	printf("Enter an age : ");
	scanf("%d",&age);
	if(age <= 0 || age >= 125){
		printf("That's not a valid age");
	}else{
		printf("It is classed as : ");
		if(age > 0 && age < 18) 
			printf("A Child");
		else if(age > 18 && age < 65) 
			printf("An Adult");
		else 
			printf("A Senior Citizen");
	}
	return 0;
}
