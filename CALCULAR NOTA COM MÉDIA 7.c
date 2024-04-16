#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

float n1, n2, n3, mp, mf, af;

printf("Informe a primeira nota: ");
scanf("%f", &n1);

printf("Informe a segunda nota: ");
scanf("%f", &n2);

printf("Informe a terceira nota: ");
scanf("%f", &n3);

mp = (n1 + n2 + n3)/3;

if((mp >= 3.5) && (mp < 7)){
	printf("A sua Média Parcia é de %.1f portanto você fara a Avaliação Final!\n\n", mp);

printf("Informe a nota da avaliação final: ");
scanf("%f", &af);

    mf = ((6 * mp) + (4 * af))/10;

if (mf >= 5){
	printf("A sua média final é %.1f portanto vecê está aprovado(a)!\n",mf);
}

else{
	printf("A sua média final é %.1f portanto vecê está reprovado(a)!\n",mf);
}

}
else if(mp < 3.5){
	printf("A sua Média Parcia é de %.1f portanto você está reprovado!\n", mp);
}

else{
	printf("A sua Média Parcia é de %.1f portanto você está aprovado!\n", mp);
}

return(0);
}
