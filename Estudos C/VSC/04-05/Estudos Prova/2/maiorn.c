#include <stdio.h>

int main() {
    float numero, maior;

    printf("Digite um numero (0 para sair): ");
    scanf("%f", &numero);

    if (numero == 0) {
        printf("Nenhum numero foi digitado.");
        return 0;
    }

    maior = numero;

    while (1) {
        printf("Digite um numero (0 para sair): ");
        scanf("%f", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > maior) {
            maior = numero;
        }
    }

    printf("Maior numero: %.2f", maior);

    return 0;
}