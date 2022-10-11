#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int minutos, segundos;
		
		
		printf("Minutos e horas\n\n");
		
		
		printf("Digite os minutos: ");
		scanf("%d", &minutos);
		
		segundos = (minutos * 60);
		
		printf("O resultado é: %d", segundos);

	return 0;	
}
