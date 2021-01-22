# include<stdio.h>
# include<stdlib.h>
# include<time.h>
int main () {
	int myNum , yourNum ;
	srand( time (NULL)); 
	myNum = 1 + rand () % 10; 
	printf(" Guess my number (between 1 and 10): ");
	scanf("%d", &yourNum);
	if(yourNum < myNum){
		printf("Your guess was too small.\n");
	}else if(yourNum > myNum){
		printf(" our guess was too high.\n");
	}else{
		printf("You got it !\n");
		return 0;
	}
	printf("The correct number was %d.\n",myNum );
	return 0;
}
