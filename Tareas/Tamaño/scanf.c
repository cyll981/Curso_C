#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b;
	
	printf("\t\tSuma de dos numeros");
	printf("\nDame los numeros:");
	scanf("%i , %i",&a,&b);
	
	
	
	printf("\nEl Resultado es: %i y  su tamaño es %i",a+b,sizeof(a+b));
	system("calc.exe");
	
	
	
	getchar();
	fflush(stdin);
   
}        