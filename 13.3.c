#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define max 7
bool check(char line[]){
	int i;
	for(i=0;i<3;i++){
		if(!isalpha(line[i])){
			return false;
		}
	}
	for(i=3;i<7;i++){
		if(!isdigit(line[i])){
			return false;
		}
	}
	return true;
}
int main(){
	char line[7];
	do{
		printf("Enter a line of text: ");
		gets(line);
		puts(line);
		if(check(line))
			printf("True\n");
		else
			printf("False\n");
	}while(!check(line));
	
	return 0;
}
