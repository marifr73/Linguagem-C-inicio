#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
   
int n, i, f = 1;

    printf("Digite um número inteiro: ");
    scanf("%i", &n);

    if(n < 0)
        printf("Não existe fatorial de número negativo!\n");
    else {
        for(i = 1; i <= n; i++) {
            f *= i;
        }
        printf("%i! = %i\n", n, f);
    }

    return (0);
}
