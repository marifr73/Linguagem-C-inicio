#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
int x, y, i, cont, p;
    
    do {
        printf("Digite o valor inicial do intervalo: ");
        scanf("%i", &x);
    } while (x <= 0);

    do {
        printf("Digite o valor final do intervalo: ");
        scanf("%i", &y);
    } while (y <= x);

    printf("Números primos entre %i e %i:\n", x, y);

    for (i = x; i <= y; i++) {
        p = 0;

        for (cont = 1; cont <= i; cont++) {
            if (i % cont == 0) {
                p++;
            }
        }

        if (p == 2) {
            printf("%i ", i);
        }
    }

    return (0);
}
