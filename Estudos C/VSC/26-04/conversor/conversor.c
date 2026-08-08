#include<stdio.h>

int main() {

    const float colher_cha = 5;
    const float colher_sopa = 15;
    const float xicara_cha = 240;
    float qtd, resultado;
    char medida;

    printf("Digite a quantidade em gramas: \n");
    scanf("%f", &qtd);
    
    printf("Digite a medida em xicaras (x), colheres de sopa (s) ou colheres de cha (c): \n");
    scanf(" %c", &medida);

    if (medida == 'x' || medida == 'X') {
        resultado = (qtd / xicara_cha);
        printf("Medida em xicaras: %.2f", resultado);
    }
    
    else if (medida == 'c' || medida == 'C') {
        resultado = (qtd / colher_cha);
        printf("Medida em colheres de cha: %.2f", resultado);
    }

        else if (medida == 's' || medida == 'S') {
        resultado = (qtd / colher_sopa);
        printf("Medida em colheres de sopa: %.2f", resultado);
    }

    else {
        printf("Medida invalida!");
        return 1;
    }

    return 0;

}
