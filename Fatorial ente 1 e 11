#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int i, fat, cont;

    printf("O cálculo fatorial dos números ímpares de 1 até 11 é:\n");

    for (i = 1; i <= 11; i += 2) {
        fat = 1;
        cont = 1;

        while (cont <= i) {
            fat *= cont;
            cont++;
        }

        printf("%d! = %d\n", i, fat);
    }

    return 0;
}