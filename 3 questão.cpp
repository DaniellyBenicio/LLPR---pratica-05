#include <stdio.h>
#include <locale.h>

	int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float f1, f2, f3, f4, a, b, c;
	
	printf("Leia os n�meros e fa�a as f�rmulas:\n\n");
	
	printf("Leia o primeiro n�mero: ");
	scanf("%f", &a);
	
	printf("Leia o segundo n�mero: ");
	scanf("%f", &b);
	
	printf("Leia o terceiro n�mero: ");
	scanf("%f", &c);
	
	f1 = (a*b)/c;
	
	f2 = (a * a) + b + 5*c;
	
	f3 = a * b * c  + b + (c/3*5) - 1;
	
	f4 = (a * b * c)*(a * b * c)*(a * b * c)/2;
	
	printf("O resultado � \n %.2f \n %.2f  \n %.2f \n %.2f", f1, f2, f3, f4);
		
	
	
	return 0;

}
	
	
