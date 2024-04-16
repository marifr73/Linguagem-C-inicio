#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float c, f;
printf("Informe Fahrenheir:");
scanf("%f", &f);

c = (f-32)/1.8;

printf("O valor de Fahrenheir para Celcius é: %.2f °C",c);
return(0);
}
