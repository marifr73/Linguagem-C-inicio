#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    float c, f;
printf("Informe Celsius: ");
scanf("%f", &c);
f = (c * 1.8) + 32;
printf("O valor de Celsius para Fahrenheit é: %.2f °F", f);
return(0);
}
