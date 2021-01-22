#include<stdio.h>
int main() {
	int giaithua,a=1,b;
	printf("Nhap vao 1 so: ");
	scanf("%d", &giaithua);
	for (a;a<=giaithua;a++){
		b*=a;
	} 
	printf ("Giai thua cua %d la: %d", giaithua, b);
	return 0;
}
