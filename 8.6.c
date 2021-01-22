#include <stdio.h>
int main(){
	int counter = 1,n;
	printf("Enter n: ");
	scanf("%d",&n); 
	do {
	printf( "%d ", counter ); 
	} while ( ++counter < n );
	
	return 0;

}
