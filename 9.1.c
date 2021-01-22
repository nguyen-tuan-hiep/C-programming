#include<stdio.h>

double kineticEnergy(double m, double v){
	return m*v*v/2;
}

int main(){
	double m,v;
	printf("Enter m: ");
	scanf("%lf",&m);
	printf("Enter v: ");
	scanf("%lf",&v);
	printf(" Kinetic Energy = %lf",kineticEnergy(m,v));


	return 0;
}
