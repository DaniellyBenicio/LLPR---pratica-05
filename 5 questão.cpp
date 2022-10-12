#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int dinheiro, pnt;
	
	printf("Quanto o cliente perderá no troco sabendo que o valor do café é 7 reais? \n\n");
	
	printf("Dinheiro colocado na máquina: ");
	scanf("%i", &dinheiro);	
	
	pnt = 	dinheiro % 7;
	
	printf("O cliente perderá: %i\n\n", pnt);
	
	
	
return 0;
}
