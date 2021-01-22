  
/*	• Write a program that defines 3 matrices A,B,C of size 3x3 with int elements; initialize the first two matrices (A and B)
	• Compute the matrix multiplication of A and B and store it in C (i.e. C = A*B)
	• Print all the matrices on the screen */

#include<stdio.h>
#include<conio.h>
int main(){
	int matrixA[3][3], matrixB[3][3], matrixC[3][3];
	int i,j,k,sum=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element a[%d][%d] of matrix A: ",i+1,j+1);
			scanf("%d",&matrixA[i][j]);
		}
	}
	printf("The matrix A is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matrixA[i][j]);
		}
		if(j==3)
	 		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the element b[%d][%d] of matrix B: ",i+1,j+1);
			scanf("%d",&matrixB[i][j]);
		}
	}
	printf("The matrix B is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matrixB[i][j]);
			
		}
		if(j==3)
	 		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				sum += matrixA[i][k] * matrixB[k][j];
			}
			matrixC[i][j] = sum;
			sum =0;
		}
	}
	printf("The matrix C is:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",matrixC[i][j]);
		}
		if(j==3)
	 		printf("\n");
	}
	getch();
	return 0;
}
