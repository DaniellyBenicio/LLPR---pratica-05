#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int dinheiro, pnt;
	
	printf("Quanto o cliente perder� no troco sabendo que o valor do caf� � 7 reais? \n\n");
	
	printf("Dinheiro colocado na m�quina: ");
	scanf("%i", &dinheiro);	
	
	pnt = 	dinheiro % 7;
	
	printf("O cliente perder�: %i\n\n", pnt);
	
	
	
return 0;
}
