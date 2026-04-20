#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

int main ()
{
	//variaveis
	setlocale (LC_ALL,"portuguese");
	int a, b, c=0;
	//inicio
	printf("Entre com o primeiro valor\n");
	scanf("%i", &a);
	printf("Entre com o segundo valor\n");
	scanf("%i", &b);
	printf("Entre com o terceiro valor\n");
	scanf("%i", &c);
	if((a < b) && (a < c) && (b < c))
	{
		printf("%i, %i, %i", a, b, c);
		}
		
			else if((a < b) && (a < c) && (c< b))
			{
				printf("%i, %i, %i", a, c, b);
				}
				
				else if((b < a) && (b < c) && (c< b))
				{
					printf("%i, %i, %i", b, a, c);
					}
				
					else if((b < c) && (b < a) && (c< a))
					{
						printf("%i, %i, %i", b, c, a);
						}
						
						else if((c < b) && (c < b) && (a< b))
						{
							printf("%i, %i, %i", c, a, b);
							}
							
							else
							{
								printf("%i, %i, %i", c, b, a);
							}
getch();
}//fim
