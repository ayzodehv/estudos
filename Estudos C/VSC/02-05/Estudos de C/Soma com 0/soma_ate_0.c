#include <stdio.h>

int main() {
    float numero, soma = 0;

    do {
        printf("Digite um numero para somar (digite 0 para cancelar): ");
        scanf("%f", &numero);
        soma = soma + numero;
    } while (numero != 0);

    printf("Soma total: %.2f", soma);

    return 0;
}