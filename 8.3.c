#include <stdio.h> 
void main() 
{ 
	float i, t, c; 
	printf("Enter the number :"); 
	scanf("%f", &c); 
	for (t = c, i = 0; i < 100; i++,t = ((t + (c / t)) / 2)); 
	printf("Sqrt is %f\n", t); 
} 
