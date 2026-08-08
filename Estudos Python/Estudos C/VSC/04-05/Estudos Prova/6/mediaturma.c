#include <stdio.h>

int main() {
    int i;
    float nota, mediaturma = 0;

    for (i=0; i<5; i++) {
        printf("Digite a nota do aluno %i: ", i+1);
        scanf("%f", &nota);

        mediaturma = mediaturma + nota;
    }

    mediaturma = mediaturma/5;

    if (mediaturma >= 6) {
        printf("Turma aprovada! :D\n");
    }
    else {
        printf("Turma reprovada... :(\n");
    }
    
    printf("Media da turma: %.2f", mediaturma);

    return 0;
}