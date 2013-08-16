#include<stdio.h>


int factorial(num)
{
   if(num==1)
   return num;
   else
   return num*factorial(num-1);
}




int main()
{
   int a;
   printf("Dame el numero para hacer su factorial: ");
   scanf("%i",&a);
   
   printf("%i",factorial(a));
   
   return 0;
}