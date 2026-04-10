#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int main()
{
//variaveis
setlocale (LC_ALL,"portuguese");
float valor1=0;
//inicio
printf ("Entre com a temperatura:\n");
scanf("%f", &valor1);
if(valor1 >= 37){
	printf ("O Diagnostico é: Febre");
	}
		else{
			printf ("O Diagnostico é: Normal");
		}
}

