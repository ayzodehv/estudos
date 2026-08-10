#include <stdio.h>

int main() {
    float soma = 0, numero;

    while (1) {
        printf("Digite um numero para somar (0 para sair): ");
        scanf("%f", &numero);

        if (numero == 0) {
            break;
        }

        soma = soma + numero;
    }
    
    printf("Soma total: %f", soma);

    return 0;
}