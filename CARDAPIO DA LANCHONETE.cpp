#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

int n, q;

printf("***********CARDÁPIO LANCHONETE***********\n");
printf("|CÓDIGO | ESPECIFICAÇÃO | PREÇO UNITÁRIO|\n");
printf("|  100  |CACHORRO QUENTE|      08.00    |\n");
printf("|  101  |     BAURU     |      09.00    |\n");
printf("|  102  |    X-SALADA   |      10.00    |\n");
printf("|  103  |   HAMBÚRGUER  |      12.00    |\n");
printf("|  104  |  REFRIGERANTE |      03.00    |\n");

printf("Informe o código do produto desejado: ");
scanf("%i", &n);

printf("Informe a quantidade que deseja comprar: ");
scanf("%i", &q);

switch (n){
	
case 100:
	printf("O valor a ser pago será de: %i.00 reais", (8 * q));
	     break;
    
case 101:
	printf("O valor a ser pago será de: %i.00 reais", (9 * q));
	     break;
    
case 102:
	printf("O valor a ser pago será de: %i.00 reais", (10 * q));
	     break;
	
case 103:
    printf("O valor a ser pago será de: %i.00 reais", (12 * q));
	     break;
    
case 104:
	  printf("O valor a ser pago será de: %i.00 reais", (3* q));
	     break;
    
default: 
    printf("O código informado é invalido!");
         break;
}
return(0);
}
