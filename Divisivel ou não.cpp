#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
int x, y;
printf("Informe um número inteiro: ");
scanf("%i", &x);
printf("Informe outro número inteiro: ");
scanf("%i", &y);

if (y == 0){
	printf("Erro: Divisão por zero não é possivel!");
}
else if(x % y == 0 ){
	printf("É divisivel!");
}
else{
	printf("Não é divisivel!");
}
return(0);
}
