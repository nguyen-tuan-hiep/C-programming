#include<stdio.h>
#include<string.h>
int main(){
	char product[5][100] = {"TV127 31 inch Television","CD057 CD Player","TA877 Answering Machine","CS409 Car Stereo","PC655 Personal Computer"};
	char lookUp[100], *strPtr = NULL;
	int i;
	printf("Enter a product number to search for: ");
	gets(lookUp);
	for(i=0;i<5;i++){
		strPtr = strstr(product[i], lookUp);
		if (strPtr != NULL)
			break;
	}
	if(strPtr == NULL){
		printf("No matching product");
	}else{
		printf("%s\n",product[i]);
	}
	return 0;
}
