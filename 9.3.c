#include<stdio.h>
#include<math.h>
//tinh 1^3 + 2^3 + ... + n^3
//in ra cac uoc cua n
//in ra n so chinh phuong dau tien
int cube(int n) {
	int i=1, P=1, S=0;
	for(i=1;i<=n;i++){
		P=i*i*i;
		S=S+P;
	}
	return S;
}
void uoc(int n){
	int i=1;
	for(i;i<=n;i++){
		if(n%i==0){
			printf("%d ",i);
		}
	}
}
void perfectSquare(int n){
	int i=0,j=0;
	int count =0;
	for(i;;i++){
		for(j;j<=sqrt(i);j++){
			if(j*j==i){
				printf("%d ",i);
				count ++;
			}
		}
		if(count ==n){
			break;
		}
	}
}
int main()
{
	int n, i=1;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("S = %d\n",cube(n));
	uoc(n);
	printf("\n");
	perfectSquare(n);
	return 0;
}
