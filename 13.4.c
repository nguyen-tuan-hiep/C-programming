  
#include<stdio.h>
void replace(char str1[], char str2[]){
	int i=0;
	for(i;i<=100;i++){
		str2[i] = str1[i];
	}
}
int main(){
	char str1[100], str2[100];
	printf("Enter str1: \n");
	gets(str1);
	replace(str1,str2);
	printf("str1 is: %s\n",str1);
	printf("str2 is: %s\n",str2);
	return 0;
}
