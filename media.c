//1 - Fazer um programa que recebe 2 variáveis inteiras e deve fazer a média aritmética. Imprimir o valor da média.
//2 – Fazer um programa que recebe 3 variáveis do tipo float e faz a média ponderada. O 1º valor tem peso 1,
//o 2º valor tem peso 3 e o 3º valor tem peso 2.
//3 – Fazer um programa que recebe 2 variáveis do tipo float e as seguintes operações: soma, subtração,
//multiplicação, divisão e raiz quadrada de cada uma das variáveis. Retornar o valor de cada operação.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <unistd.h> // to use sleep

int main(){

	setlocale(LC_ALL, "Portuguese");
    int option;

    while(option != 4){
        menu();
        printf("Selecione a opção desejada: ");
        scanf("%d", &option);
        printf("\n");

        switch (option) {
            case 1:
                integerMedia();
                break;
            case 2:
                floatMedia();
                break;
            case 3:
                floatOperation();
                break;
            case 4:
                system("exit");
                break;
            default:
                printf("Escolha uma opção válida. \n");
        }

		Sleep(4);
		System("clear");
    }
}

void integerMedia()
{
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Média ponderada inteira: %d \n", (a + b) / 2);
}

void floatMedia()
{
    float a, b, c;

    printf("Digite o valor de a (peso 1): ");
    scanf("%f", &a);

    printf("Digite o valor de b (peso 3): ");
    scanf("%f", &b);

    printf("Digite o valor de c (peso 2): ");
    scanf("%f", &c);

    printf("Média ponderada: %.2f \n", (a + (b * 3) + (c * 2)) / 3);
}

void floatOperation()
{
    float a, b, c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Soma: %.2f \n", a + b);
    printf("Subtração: %.2f \n", a - b);
    printf("Multiplicação: %.2f \n", a * b);
    printf("Divisão: %.2f \n", a / b);
    printf("Raiz quadrada A: %.2f \n", sqrt(a));
    printf("Raiz quadrada B: %.2f \n", sqrt(b));
}

void menu()
{
    printf("******************* \n");
    printf("1 - Média de dois inteiros \n");
    printf("2 - Média de três flutuantes \n");
    printf("3 - Operações com flutuantes \n");
    printf("4 - Sair \n");
    printf("******************* \n\n");
}

