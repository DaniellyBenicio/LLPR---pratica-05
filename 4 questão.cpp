#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float m, a, IMC;
	
	printf("ìndice de Massa Corporal (IMC)\n\n");
	
	printf("Digite a massa: ");
	scanf("%f", &m);
	
		
	printf("Digite a altura: ");
	scanf("%f", &a);
	
	IMC = m/(a*a);
	
	printf("O IMC equivale a %f \n", IMC);
	
	
	return 0;
}
