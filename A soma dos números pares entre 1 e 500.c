#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int cont, i = 0;
	printf("===================================\n");
        printf("Os números pares entre 1 e 500 são: ");
	printf("\n===================================\n");
	
        for(cont = 1; cont <= 500; cont++) {
            if(cont % 2 == 0) {
               i += cont;
            }
        }
    printf("\n-------------------------------------------------\n");	
    printf("A soma dos números pares entre 1 e 500 é: %i\n", i);
     printf("\n------------------------------------------------\n");	
    return (0);
}
