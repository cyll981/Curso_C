#include<stdio.h>


float prom(int valor);


int main()
{
  int valor;
  printf("Dame el numero de calificaciones: ");
  scanf("%i",&valor);  
  printf("El promedio es: %.2f",prom(valor));
  return 0;
}

float prom(int valor)
{
   int calif[valor-1];
   int i;
   float prom=0;
   
   for(i=0;i< valor;i++)
   {
     printf("Dame el valor %i: ",i+1);
	 scanf("%i",&calif[i]);
   }
   
   for(i=0;i< valor;i++)
   {
     prom += calif[i];
   }
   
   prom/=valor;
   return prom;
}