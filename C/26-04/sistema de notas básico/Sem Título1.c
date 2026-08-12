#include<stdio.h>
int main()
{
	float nota1,nota2,notaf;
	printf("Insira a nota 1: ");
	scanf("%f", &nota1);
		if (nota1> 10)
		do {
			printf("ERRO: Nota maior que 10 não existe!\n");
			nota1 = 0;
			printf("Insira a nota 1: ");
			scanf("%f", &nota1);
		} while (nota1> 10);
	printf("Insira a nota 2: ");
	scanf("%f", &nota2);
		if (nota2> 10)
		do {
			printf("ERRO: Nota maior que 10 não existe!\n");
			nota2 = 0;
			printf("Insira a nota 2: ");
			scanf("%f", &nota2);
		} while (nota1> 10);
	notaf = (nota1 + nota2)/2;
	printf("Sua nota final é: %.2f\n", notaf);
}
