#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>

int main(){
    	int op, num1, num2, soma, subtracao, multip, divisao;
				float a, b, c, x1, x2, delta;
	while(op != -1){
		printf("############### Calculadora 1.0 #############\n");
		printf("###############  Qual operacao: #############\n");
		printf("1-Multiplicar 2-Potencia(2) 3-Bhaskara 0-Sair\n");
		scanf("%i", &op);
		printf("\n");
		switch(op){
			case 1:
				printf("Digite os 2 numeros: ");
				scanf("%i%i", &num1, &num2);
				printf( "%i x %i eh: %i\n", num1, num2, num1 + num2);
			break;
			case 2:
				printf("Digite o valor: ");
				scanf("%i", &num1);
				printf( "Potencia de %i eh: %i\n",num1, num1 * num1);
			break;
			case 3:
 				printf("Digite os valore: ");
				scanf("%f%f%f", &a, &b, &c);
				delta = b * b - 4 * a * c;
				x1 = (-b + sqrt(delta)) / (2*a);
				x2 = (-b - sqrt(delta)) / (2*a);
				if(delta < 0) {
					printf("A equacao nao possui raizes reais.\n");
				} else {
					printf("O valor de x1: %.2f\n", x1);
					printf("O valor de x2: %.2f\n", x2);
				}
			break;
			case 0:
				return 0;
			default:
				printf("Digite um numero valido \n");
			
	    	}
		getc();
		system("clear");
	}
}
