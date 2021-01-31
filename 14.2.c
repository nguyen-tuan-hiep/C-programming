#include<stdio.h>
#include<conio.h>
typedef struct Rain{
	float rainFall;
	float highTem;
	float lowTem;
	float averTem;
}rain;

int main(){
	rain month[6];
	int i;
	char data[6][10]={ "Jan", "Feb", "Mar", "Apr", "May", "Jun" };
	for(i=0;i<6;i++){
		printf("Enter the rainfall for %s: ", data[i]);
		scanf("%f", &month[i].rainFall);
		if(month[i].rainFall < -40 || month[i].rainFall > 50){
			printf("Invalid input, try again!\n");
			printf("Enter the rainfall for %s: ", data[i]);
			scanf("%f", &month[i].rainFall);
		}	
	}

	float sum =0;
	rain a;
	for(i=0;i<6;i++){
		sum+=month[i].rainFall;
		a.averTem = sum/(i+1);
	}
	printf("Average rainfall: %f",a.averTem);
	for(i=0;i<6;i++){
		if(a.highTem < month[i].rainFall)
			a.highTem = month[i].rainFall;
	}
	printf("\nHigh tem: %f",a.highTem);
	a.lowTem = month[0].rainFall;
	for(i=0;i<6;i++){
		if(a.lowTem > month[i].rainFall)
			a.lowTem = month[i].rainFall;
	}
	printf("\nLow tem: %f",a.lowTem);
	getch();
	return 0;
}
