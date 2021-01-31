#include<stdio.h>
#include<string.h>
typedef struct{
	int id[6];
	char name[31];
	float grade;
	char classment
} student;

int main(){
	int n;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	student hs[n];
	int i,j;
	for(i=0;i<n;i++){
		printf("Enter the name of student %d: ",i+1);
		fflush(stdin);

		fgets(hs[i].name,31,stdin);
//gets(hs[i].name);
		hs[i].name[strcspn(hs[i].name, "\n")] = 0;
		printf("Enter id of student %d: ",i+1);
		fflush(stdin);
		fgets(hs[i].id,6,stdin);
		printf("Enter the grade of student %d: ",i+1);
		fflush(stdin);
		scanf("%f",&hs[i].grade);
	}
	for(i=0;i<n;i++){
		if(hs[i].grade>8.5){
			hs[i].classment = 'A';
		}else if(hs[i].grade>7 && hs[i].grade<8.5){
			hs[i].classment = 'B';
		}else if(hs[i].grade>5 && hs[i].grade<7){
			hs[i].classment = 'C';
		}else if(hs[i].grade<5){
			hs[i].classment = 'D';
		}
	}
	student tmp;
	for (i = 0; i < n-1; i++) { 
        for (j = i + 1; j < n; j++) { 
            if (hs[i].grade < hs[j].grade){
				tmp=hs[i];
				hs[i]=hs[j];
				hs[j]=tmp;
			}
        } 
    }
	printf("Name \t Grade \t\t Classment\n");
    for(i=0;i<n;i++){
    	printf("%-31s \t %1.2f \t\t %c\n",hs[i].name,hs[i].grade,hs[i].classment);
	}
    return 0;
}
