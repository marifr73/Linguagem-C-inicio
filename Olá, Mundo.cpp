#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

printf("Hello, World!\n\n");
printf("Hello,\nWorld!\n\n");
printf("\tHello, World!\n\n");
printf("Hello,\n\t World!\n\n");
return(0);
}
