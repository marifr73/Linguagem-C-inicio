#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float d, r, s;
printf("Informe o valor a ser convertido em delar: ");
scanf("%f", &r);
d = 0.20;
s = (r * d);
printf("O valor %.2f reais convertido em dolar é %.2f!", r, s);
return(0);
}
