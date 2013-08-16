#include<stdio.h>

int Primo(int num);




int main()
{
    int a;

    printf("Dame un numero: ");
    scanf("%i",&a);
    printf("Hay %i numeros primos entre 2 y %i",Primo(a),a);


    return 0;
}

int Primo(int num)
{
    int i,j,cont=0,cont2=0,primo=2;
   for(i=num; i >=2; i--)
   {
       cont2=0;
       for(j=i-1; j >=2 ; j--)
       {
           if( i%j == 0 )
            {

               cont2++;
           }
       }
       if(cont2==0)
        {   cont++;
           printf("Este es un primo %i\n",i);
       }



   }
   return cont;
}

