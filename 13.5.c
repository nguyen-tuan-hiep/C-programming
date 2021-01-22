#include<stdio.h>
#include<string.h>

void cut(char name[]){
	int i=0,j;
	while (name[i] != ' ' && name[i] != '\0'){
		i++;
		if (name[i] == ' ')
			name[i] = '\0';
	}
}

int main(){
	char name[100];
	printf("Enter your first name and last name: ");
	gets(name);
	cut(name);
	printf("Your first name is: %s\n", name);
	return 0;
}
