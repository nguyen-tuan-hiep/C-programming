#include <stdio.h>
#include <math.h>
int main(){
	int i, j;
	double sqrti;
	printf("%d\n", 2);
	for(i = 3; i <= 100; i = i + 2){
		sqrti = sqrt(i);
		for(j = 2; j < i; j = j + 1){
			if(i % j == 0)
			break; 
			if(j > sqrt(i)){
				printf("%d\n", i);
				break;
			}
	
		}
	}
	return 0;
}
