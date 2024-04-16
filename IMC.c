#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
float p, a, imc;
printf("Informe a sua altura: ");
scanf("%f", &a);
printf("Informe o seu peso: ");
scanf("%f", &p);
imc = p/(a*a);
printf("O seu IMC é: %.2f", imc);
return(0);
}
