#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float base, altura, area;
	
	printf("Calcule a �rea do tri�ngulo \n\n");
	
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	
	area = (base * altura)/2;
	
	printf("A �rea do tri�ngulo �: %.2f \n\n", area);
	
	return 0;
}
