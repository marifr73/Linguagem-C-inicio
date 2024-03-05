#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float x;
printf("Digite um número: ");
scanf("%f", &x);

printf("O cubo é: %.1f ", pow(x,3));
return(0);
}
