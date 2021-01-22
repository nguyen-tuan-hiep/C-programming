#include<stdio.h>
int max(int a, int b, int c, int d, int e) {
	int tg =a;
	if (tg < b){
		tg =b;
	}
	if (tg <c){
		tg =c;
	}
	if (tg <d){
		tg =d;
	}
	if (tg <e){
		tg =e;
	}
	return tg;
}
	
int min(int a, int b, int c, int d, int e) {
	int gg =a;
	if (gg > b){
		gg =b;
	}
	if (gg >c){
		gg =c;
	}
	if (gg >d){
		gg =d;
	}
	if (gg >e){
		gg =e;
	}
	return gg;
}
	
void score(int a, int b, int c, int d, int e){
	int sum = a+b+c+d+e;
	double S= ((sum-(max(a,b,c,d,e)+min(a,b,c,d,e)))/3.0);
	printf("Score: %lf", S);
}

int main(){
	int a, b, c, d, e;
	printf("Enter score 1: ");
	scanf("%d", &a);
	printf("Enter score 2: ");
	scanf("%d", &b);
	printf("Enter score 3: ");
	scanf("%d", &c);
	printf("Enter score 4: ");
	scanf("%d", &d);
	printf("Enter score 5: ");
	scanf("%d", &e);
	score(a,b,c,d,e);
	return 0;
}
