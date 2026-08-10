#include <stdio.h>

int main() {
    int numero, multi;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(multi = 1; multi < 11; multi++) {
        printf("%d x %d = %d\n", numero, multi, numero * multi);
    }

    return 0;
}