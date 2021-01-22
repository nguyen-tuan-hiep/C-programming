#include <stdio.h>
int main(){
	int i, j; 
	printf(" I J\n");
	for (i = 1; i < 4; i = i + 1) {
		printf("Outer %6d\n", i);
		for (j = 0; j < i; j = j + 1){
			printf(" Inner%9d\n", j);
		} 
	}
	return 0;
}
