#include<stdio.h>
typedef struct fraction{
	int ts;
	int ms;
}frac;
//=========================================================
void rutgonPS(frac a){
	int i, ucln;
	int min = a.ts;
	if(a.ts > a.ms){
		min = a.ms;
	}
	if(min > 0){
		for(i=min; i>0; i--){
			if((a.ms)%i==0 && (a.ts%i==0)){
				ucln=i;
				break;
			}
		}
	}	
	else if(min < 0){
		for(i=min; i<0; i++){
			if((a.ms)%i==0 && (a.ts%i==0)){
				ucln=i;
				break;
			}
		}
	}
	printf("Phan so toi gian: %d/%d\n", (a.ts)/ucln, (a.ms)/ucln);
}
//==============================================================
void nhanPS(frac b[], int n){
	int i;
	frac phanso;
	phanso.ms =1;
	phanso.ts =1;
	for(i=0;i<n;i++){
		printf("Enter tu so: ");
		scanf("%d",&b[i].ts);
		do{
			printf("Enter mau so: ");
			scanf("%d",&b[i].ms);
		}while(b[i].ms==0);
	}
	for(i=0;i<n;i++){
		phanso.ts *= b[i].ts;
		phanso.ms *= b[i].ms;
	}
	rutgonPS(phanso);
}
int main(){
	frac a;
	printf("Enter tu so: ");
	scanf("%d",&a.ts);
	do{
		printf("Enter mau so: ");
		scanf("%d",&a.ms);
	}while(a.ms==0);
	printf("2. Rut gon phan so:\n");
	rutgonPS(a);
	
	printf("3. Nhan bao nhieu phan so: ");
	int n;
	scanf("%d",&n);
	frac b[n];
	nhanPS(b,n);
	return 0;
}
