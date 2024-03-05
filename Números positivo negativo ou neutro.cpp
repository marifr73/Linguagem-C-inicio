#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int n;
printf("Informe um número: ");
scanf("%i", &n);

if (n > 0){
	printf("%i é positivo!", n);
}
else if(n < 0){
	printf("%i é negativo!", n);
}
else{
	printf("0 é neutro!", n);
}
return(0);
}
