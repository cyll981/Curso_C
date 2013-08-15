#include<stdio.h>
#include<stdlib.h>

void rellenar(int []);
void imprimir(int []);

int main()
{
  int valor;
  int a[6];
  rellenar(a);
  imprimir(a);
  return 0;
}

void rellenar(int cad[])
{
   
   int i;
   
   for(i=0;i< 6;i++)
   { 
      cad[i]=rand()%10;
   }
   
   
}

void imprimir(int cad[])
{
   
   int i;
   
   for(i=0;i< 6;i++)
   { 
      printf("%i ",cad[i]);
   }
   
   
}