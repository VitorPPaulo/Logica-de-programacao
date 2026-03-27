#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	//variaveis
	setlocale (LC_ALL,"portuguese");
	float a, pi, r=0;
	//inicio
	pi=3.1415;
	printf("Entre com o raio:\n");
	scanf("%f", &r);
	a=pi*pow(r,2);
	printf("Valor da area:  %.4f\n", a);
	getch();
}//fim
