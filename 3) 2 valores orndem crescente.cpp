#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	//variaveis
	setlocale (LC_ALL,"portuguese");
	float valor1, valor2, valor3, valor4=0;
	//inicio
	printf("Entre com o primeiro valor\n");
	scanf("%f", &valor1);
	printf("Entre com o segundo valor\n");
	scanf("%f", &valor2);
	if(valor1 < valor2) {
		printf("%.0f, %.0f", valor1, valor2);
		}
			if(valor2 < valor1){
				printf("%.0f, %.0f", valor2, valor1);
			}
getch();
}
