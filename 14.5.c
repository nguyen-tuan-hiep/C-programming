#include<stdio.h>
typedef struct fraction{
	float tuso;
	float mauso;
}frac; 
//=====================================================================================//
void input(frac m[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("Enter tu so thu %d: ",i+1);
		scanf("%f",&m[i].tuso);
		do{
			printf("Enter mau so thu %d: ",i+1);
			scanf("%f",&m[i].mauso);
			if(m[i].mauso==0)
				printf("Mau so phai khac 0. Hay nhap lai\n");
		}while(m[i].mauso==0);
	}
	for(i=0;i<n;i++){
		printf("Phan so thu %d la: %.2f/%.2f \n", i+1, m[i].tuso, m[i].mauso);
	}
}
//=========================================================================================//
void inverse(frac m[], int n){
	int i;
	for(i=0;i<n/2;i++){
		frac tem;
		tem = m[i];
		m[i] = m[n-i-1];
		m[n-i-1] = tem;
	}
	printf("Inverse fraction array:\n");
	for(i=0;i<n;i++){
		printf("Phan so thu %d la %.2f/%.2f \n", i+1, m[i].tuso, m[i].mauso);
	}
}
//============================================================================================//
void compare(frac m[]){
	int i;
	for(i=0;i<2;i++){
		printf("Enter tu so thu %d: ",i+1);
		scanf("%f",&m[i].tuso);
		do{
			printf("Enter mau so thu %d: ",i+1);
			scanf("%f",&m[i].mauso);
			if(m[i].mauso==0)
				printf("Mau so phai khac 0. Hay nhap lai\n");
		}while(m[i].mauso==0);
	}
	if(m[0].tuso/m[0].mauso > m[1].tuso/m[1].mauso)
		printf("Phan so thu nhat lon hon phan so thu hai");
	else if(m[0].tuso/m[0].mauso < m[1].tuso/m[1].mauso)
		printf("Phan so thu nhat be hon phan so thu hai");
	else 
		printf("2 phan so bang nhau.");
}
//=================================================================================================//
int main(){
	int n,i;
	printf("Enter the number of fractions: ");
	frac m[n];
	scanf("%d",&n);
	input(m,n);
	inverse(m,n);
	compare(m);	
}
