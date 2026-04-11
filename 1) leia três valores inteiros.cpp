#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	//variaveis
	setlocale (LC_ALL,"portuguese");
	int valor1, valor2, valor3, valor4=0;
	//inicio
	printf("Entre com o primeiro valor\n");
	scanf("%f", &valor1);
	printf("Entre com o segundo valor\n");
	scanf("%f", &valor2);
	printf("Entre com o terceiro valor\n");
	scanf("%f", &valor3);
	valor4 = valor1;
	if(valor1 < valor4) {
		valor4 = valor1;
	}
		if (valor2 < valor4) {
    		    valor4 = valor2;
    	}
    		if (valor3 < valor4) {
        		valor4 = valor3;
    		}
    printf("O menor valor é: %1\n", valor4);
	getch();
}//fim
