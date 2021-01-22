#include<stdio.h>
int main() {

	int n, i, sum =0;
	printf("Nhap vao 1 so: ");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if (n==sum){
		printf("%d la so hoan hao.",n);
	}else{
		printf("%d khong la so hoan hao.",n);
	}
	
	return 0;
}
