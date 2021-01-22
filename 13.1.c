#include<stdio.h>
#include<string.h>
int spacecounter(char line[]){
	int i=0,count =0;
	for(i=0;line[i]!=0;i++){
		if(line[i]==' ')
			count ++;
	}
	return count;
}

int main(){
	char line[100];
	printf("Enter a line of text: ");
	gets(line);
	printf("%s\n",line);
	printf("The number of blank character is %d",spacecounter(line));
	return 0;
}
