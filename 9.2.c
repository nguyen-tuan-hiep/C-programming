#include<stdio.h>
int is_prime(int n);
int main(){
	int n;
	printf("Enter an integer: ",n );
	scanf("%d",&n);
	printf("%d",is_prime(n));
	return 0;
}

int is_prime(int n){
	int count =0;
	int i =2;
	for(i=2;i<=n;i++){
		if(n%i==0){
			count ++;
		}
	}
	if (count==1){
		return 1;
	}
	if (count!=1){
		return 0;
	}
}
