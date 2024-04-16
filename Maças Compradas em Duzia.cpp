#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float m;
printf("Informe a quantidade da maças compradas: ");
scanf("%f", &m);

if (m < 12){
	printf("O valor a ser pago pelas maças é de: %.2f", m * 1.30);
}
else {
	printf("O valor a ser pago pelas maças é de: %.2f", m * 1.10);
}
return(0);
}
