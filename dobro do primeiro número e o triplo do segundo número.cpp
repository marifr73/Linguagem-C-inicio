#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
int x, y, l, m;
printf("Digite um número: ");
scanf("%i", &x);
printf("Digite outro número: ");
scanf("%i", &y);

l = x * 2;
m = y * 3;

printf("\nO dobro de %i é: %i", x, l);
printf("\nO triplo de %i é: %i", y, m);
return(0);
}
