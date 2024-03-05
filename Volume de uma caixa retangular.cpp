#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
float c, a, l, v;
printf("Informe o comprimento da caixa: ");
scanf("%f", &c);
printf("Informe o altura da caixa: ");
scanf("%f", &a);
printf("Informe a largura da caixa: ");
scanf("%f", &l);
v = c * l * a;
printf("O volume da caixa retangular é de: %.2f", v);
return(0);
}
