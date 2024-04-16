#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n, s;
printf("Qual a sua idade? ");
scanf("%i", &n);
s = (n * 365);
printf("Você viveu aproximadamente %i dias!", s);
return(0);
}
