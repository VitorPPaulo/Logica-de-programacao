#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{//inicio
	//variaveis
	float cot, dolar, reais=0;
	//inicio
	printf("Entre com a cotacao:\n");
	scanf("%f",&cot);
	printf("Entre com o valor do dolar:\n");
	scanf("%f", &dolar);
	reais=cot*dolar;
	printf(" O valor em dolar:  %.2f", dolar);
	printf(" O valor em reais:  %.2f", reais);
	getch();	
}//fim
