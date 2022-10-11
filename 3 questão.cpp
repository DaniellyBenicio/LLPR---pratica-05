#include <stdio.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float f1, f2, f3, f4, a, b, c;
	
	printf("Leia os números e faça as fórmulas:\n\n");
	
	printf("Leia o primeiro número: ");
	scanf("%f", &a);
	
	printf("Leia o segundo número: ");
	scanf("%f", &b);
	
	printf("Leia o terceiro número: ");
	scanf("%f", &c);
	
	f1 = (a*b)/c;
	
	f2 = (a * a) + b + 5*c;
	
	f3 = a * b * c  + b + (c/3*5) - 1;
	
	f4 = (a * b * c)*(a * b * c)*(a * b * c)/2;
	
	printf("O resultado é \n %.2f \n %.2f  \n %.2f \n %.2f", f1, f2, f3, f4);
		
	
	
	return 0;

}
	
	
