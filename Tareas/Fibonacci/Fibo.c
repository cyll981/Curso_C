
#include<stdio.h>

void Fibo(int num, int num2,int a, int b)
{
   int cont=num2;
   int aux;
   if(cont==num)
   return;
   else
   {
      aux = b;
	  b = a + b;
	  a=aux;
	  cont++;
	  printf("%i ",b);
	  Fibo(num,cont,a,b);
   }
   
   
   
}

int main()
{
   int s;
   printf("Dame el numero de veces que se repita la serie: ");
   scanf("%i",&s);
   printf("0 1 ");Fibo(s,0,0,1);
   
   return 0;
}