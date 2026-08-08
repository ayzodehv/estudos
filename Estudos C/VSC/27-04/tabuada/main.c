#include<stdio.h>

int main() {
    int numero, multi;

    printf("Digite um número: ");
    scanf("%i", &numero);

    for (multi = 1; multi < 11; multi++) {
        printf("%d x %d = %d\n", numero, multi, numero * multi);
    }

    return 0;
}