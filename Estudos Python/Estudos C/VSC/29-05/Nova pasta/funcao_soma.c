#include <stdio.h>

int somar(int a, int b) {
    return (a + b);
}

int main() {
    int n1, n2, resultado = 0;

    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);

    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    resultado = somar(n1, n2);

    printf("O resultado da soma: %i", resultado);

    return 0;
}