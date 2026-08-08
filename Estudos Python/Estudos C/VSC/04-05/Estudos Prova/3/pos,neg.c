#include <stdio.h>

int main() {
    int i, pos = 0, neg = 0, z = 0;
    float numero;

    for(i=0; i<10; i++) {
        printf("Digite um numero: ");
        scanf("%f", &numero);

        if (numero > 0) {
            pos++;
        }

        else if (numero < 0) {
            neg++;
        }

        else {
            z++;
        }
    }

    printf("\n Qtd. de positivos: %i", pos);
    printf("\n Qtd. de negativos: %i", neg);
    printf("\n Qtd. de zeros: %i", z);

    return 0;
}