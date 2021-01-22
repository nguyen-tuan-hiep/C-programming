#include <stdio.h>
int main() {
	char name[16]; 
	printf("What's your name? ");
	scanf("%15s", name);
	printf("Hi there, %s!\n", name);
return 0;
}
