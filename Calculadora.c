#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
int x, y, o;
printf("Informe um número inteiro: ");
scanf("%i",&x);
printf("Informe outro número inteiro: ");
scanf("%i",&y);

printf("\n1 - ADIÇÃO\n");
printf("2 - SUBTRAÇÃO\n");
printf("3 - MULTIPLICAÇÃO\n");
printf("4 - DIVISÃO\n\n");
printf("Informe a operação: ");
scanf("%i", &o);  
printf("\n================================\n");

switch (o){
     
case 1:
	printf("A adição de %i mais %i é: %i\n", x, y, (x + y));
	     break;
     
case 2:
	printf("A subtração de %i menos %i é: %i\n", x, y, (x - y));
	     break;
     
case 3:
	printf("A multiplicação de %i por %i é de: %i\n", x, y, (x * y));
	     break;
     
case 4:
	if(y != 0) {
	             printf("A divisão de %i por %i é de: %i\n", x, y, (x / y));
			} 
else {
	printf("Erro: Divisão por zero não é possivel!\n");
}
 break;

default: 
    printf("Não foi encontrado o código informado!\n");
         break;
}
return(0);
}
