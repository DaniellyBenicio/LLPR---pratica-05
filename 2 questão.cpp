#include <stdio.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float multiplicacao, divisao, adicao, subtracao, a, b;
	
	printf("Leia dois n�meros:\n\n");
	
	printf("Leia o primeiro n�mero: ");
	scanf("%f", &a);
	
	printf("Leia o segundo n�mero: ");
	scanf("%f", &b);
	
	multiplicacao = a * b;
	divisao = a/b;
	adicao = a + b;
	subtracao = a - b;
	
	printf("O resultado �: \n %.2f \n %.2f \n %.2f \n %.2f", multiplicacao, divisao, adicao, subtracao);
	
	
	
	
	return 0;	
}
