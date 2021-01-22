#include <stdio.h>
int main(){
	char c1, c2, c3; 
	char first;
	printf("Enter three uppercase or three lowercase letters: ");
	scanf("%c %c %c", &c1, &c2, &c3);
	if (c1 < c2){
		first = c1;
	}else{
		first = c2;
	}
	if (c3 < first){
		first = c3;
	}
	printf("%c is the first letter alphabetically.\n",first);
	return 0;
}
