#include<stdio.h>

int main() {
    float num1, num2, r;
    char op;

    for (int contador = 0; contador < 3; contador++) {
    	printf("\nCalculo %i", contador + 1);
        printf("\nEntre o primeiro numero: ");
        scanf("%f", &num1);
        printf("\nEntre o segundo numero: ");
        scanf("%f", &num2);
        printf("\nDigite o operador (*, +, -, /): ");
        scanf(" %c", &op);

        if (op == '*') {
            r = (num1 * num2);
            printf("\nResultado = %.2f", r);
        }

        else if (op == '+') {
            r = (num1 + num2);
            printf("\nResultado = %.2f", r);
        }

        else if (op == '-') {
            r = (num1 - num2);
            printf("\nResultado = %.2f", r);
        }

        else if (op == '/') {
            if (num2 == 0) {
                printf("\nDivisão por zero não é permitida!");
            } 
            else {
                r = (num1 / num2);
                printf("\nResultado = %.2f", r);
            }
        }

        else {
        printf("\nOperador invalido!");
        }
    }
    
    return 0;
}
