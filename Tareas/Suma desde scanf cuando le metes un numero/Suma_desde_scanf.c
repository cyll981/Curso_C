#include <stdio.h>

int main(void)
{
   int i,acum,num,temp;

   scanf("%i",&num);

   acum=0;

   for(i=0;i<num;i++)
   {
       scanf("%i",&temp);
      acum+=temp;
   }

   printf("%i",acum);
    return 0;
}

