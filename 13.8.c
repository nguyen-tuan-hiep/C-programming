#include<stdio.h>
#include<string.h>
void replace(char line[]){
	int i=0;
	for(i;i<100;i++){
		if(line[i]==','||line[i]=='.'||line[i]==';'||line[i]==':'||line[i]=='!'||line[i]=='?'){
			line[i] = ' ';
		}
	}
}
int main(){
	char line[100];
	printf("Enter a text of line: ");
	gets(line);
	replace(line);
	printf("The new text of line is %s",line);
	
	return 0;
}
