#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, f = 1, cont;
    printf("O calculo fatorial dos números impares de 1 ate 11 é de: \n");
     for(i = 1; i <= 11; i+=2) {
	f = 1;
	    for(cont = 1; cont <= i ; cont++){
	    	f *= cont;
		}
    printf("%i! = %i\n", i, f);
     }
return(0);
}
