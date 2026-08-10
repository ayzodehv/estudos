#include<stdio.h>

int main() {
    int numero = 1;
    
    while (numero != 0) {
        printf("\nDigite um numero (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            printf("O numero e par.");
        }
        else {
            printf("O numero e impar.");
        }
    }

    return 0;
}