  
#include<stdio.h>
int nhapso(){
	int a;
	scanf("%d", &a);
	return a;
}
int min(int a, int b, int c){
	int min =a;
	if (min > b){
		min =b;
	}if (min >c){
		min =c;
	}return min;
}
int main(){
	int a = nhapso(), b = nhapso(), c = nhapso();
	printf("Min(a,b,c): %d", min(a,b,c));
	return 0;
}
