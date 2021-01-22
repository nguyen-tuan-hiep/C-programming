#include<stdio.h>
void replace(char *str,char c1,char c2){
	 char *p = str;
	 while(*p != '\0'){
	 	if(*p == c1){
	 		*p = c2;
		 }
		p++;
	 }
}
int main(){
    char str[100];
    gets(str);
    char c1,c2;
    scanf("%c",&c1);
    fflush(stdin);
    scanf("%c",&c2);
    replace(str,c1,c2);
    puts(str);

return 0 ;
}
