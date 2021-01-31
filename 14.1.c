#include<stdio.h>

typedef struct Date{
	int day;
	int month;
	int year;
} a;

struct Date insert(){				
	a day1; 
	printf("Enter year: ");
	scanf("%d",&day1.year);
	printf("Enter month: ");
	scanf("%d",&day1.month);
	while(day1.month>12||day1.month<1){
	
		printf("Invalid month, try again: ");
		scanf("%d",&day1.month);
	}
	printf("Enter day: ");
	scanf("%d",&day1.day);
	while(day1.day>31||day1.day<1){
		printf("Invalid day, try again: ");
		scanf("%d",&day1.day);
	}
	return day1;
}

int datcmp(a day1,a day2){
	if(day1.day>day2.day){
		return -1;
	}else if(day1.day==day2.day){
		return 0;
	}else if(day1.day<day2.day){
		return 1;
	}
}
void cmp(a day1, a day2){
	if(day1.year>day2.year)
		printf("day 1 is after day 2");
	else if(day1.year<day2.year)
		printf("day 1 is before day 2");
	else if(day1.year==day2.year){
		if(day1.month>day2.month)
			printf("day 1 is after day 2");
		else if(day1.month<day2.month)
			printf("day 1 is before day 2");
		else if(day1.month==day2.month){
				if(day1.day>day2.day)
					printf("day 1 is after day 2");
				else if(day1.day<day2.day)
					printf("day 1 is before day 2");
				else if(day1.day==day2.day)
					printf("day 1 is qual day 2");
		}
	}	
	
}
int main(){
	a day1 = insert();
	printf("Day 1 is %d/%d/%d\n",day1.day,day1.month,day1.year);
	a day2 = insert();
	printf("Day 2 is %d/%d/%d\n",day2.day,day2.month,day2.year);
	printf("%d\n",datcmp(day1,day2));
	cmp(day1, day2);
}
