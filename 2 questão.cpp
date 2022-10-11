#include <stdio.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float multiplicacao, divisao, adicao, subtracao, a, b;
	
	printf("Leia dois números:\n\n");
	
	printf("Leia o primeiro número: ");
	scanf("%f", &a);
	
	printf("Leia o segundo número: ");
	scanf("%f", &b);
	
	multiplicacao = a * b;
	divisao = a/b;
	adicao = a + b;
	subtracao = a - b;
	
	printf("O resultado é: \n %.2f \n %.2f \n %.2f \n %.2f", multiplicacao, divisao, adicao, subtracao);
	
	
	
	
	return 0;	
}
