#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	//variaveis
	setlocale (LC_ALL,"portuguese");
	float valor1=0;
	//inicio
	printf("Entre com o valor\n");
	scanf("%f", &valor1);
	if(valor1 <= 10) {
		printf("valido");
		}
			else{
				printf("invalido");
			}
getch();
}
