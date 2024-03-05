#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int cont;
    printf("Contagem de 500 até 0:\n");
    for(cont = 500; cont > 0; cont--){
    	printf("%i  ", cont);
}
return(0);
}
