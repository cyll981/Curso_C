#include <stdio.h>

int main(void)
{
    int num,i;
    printf("\t\tTabla de Multiplicar\n\n") ;
    printf("¿De que numero desea obtener la tabla? ");
    scanf("%i",&num);
    printf("La Tabla del %i es: \n",num);
    for(i=1; i<11; i++)
    {
        printf("%i X %i = %i\n",num,i,num*i);
    }


    return 0;
}

