#include <stdio.h>

int main() {
    int vetor[5], i, soma_vetor = 0;

    for (i=0; i<5; i++) {
        printf("Digite um valor para o indice %i: ", i+1);
        scanf("%d", &vetor[i]);
        soma_vetor = soma_vetor + vetor[i];
    }
    
    for (i=0; i<5; i++) {
        printf("Valor do indice %i: %i\n", i, vetor[i]);
    }

    printf("Soma dos indices: %i", soma_vetor);

    return 0;
}