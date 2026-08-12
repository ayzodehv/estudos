#include <stdio.h>

int main() {
    int numero, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial de numero negativo nao existe!!!!");
        return 1;
    }
    else {
        for (i = 1; i <= numero; i++)
        fatorial *= i;
    }

    printf("%d! = %llu\n", numero, fatorial);
    
    return 0;
}