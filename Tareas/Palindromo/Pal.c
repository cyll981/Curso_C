#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int contS(char *a);
void cpyS(char *a,char *b,int tam);
void rcpyS(char *a,char *b,int tam);
int cmpS(char *a,char *b,int tam);

int main()
{
    char s[50];
    int i=0;
     while(i < 50)
    {
      s[i] = ' ';
      i++;
    }
    
    printf("Dame tu palindromo: ");
    gets(s);
   
    char b[contS(s)];
    char c[contS(s)];
    
    cpyS(s,b,contS(s));
    rcpyS(b,c,contS(s));
    
    if(cmpS(b,c,contS(s)))
    {
     printf("Si es un palindromo");
     
     printf("La oracion es: ");
     for(i=0;i<contS(s);i++)
     printf("%c",b[i]);
     printf("La oracion palindromo es: ");
     for(i=0;i<contS(s);i++)
     printf("%c",c[i]);
    }
    else
    {
        printf("No es un palindromo");
    }
    
    fflush(stdin);
    getchar();
      return 0;
}

int contS(char *a)
{
    int i,cont=0;
    for(i=0;i<50;i++)
    {
          if(a[i] >= 65 && a[i] <= 90 ||  a[i] >= 97 && a[i] <= 122 )
          {
            
            cont++;           
          }
    }
    return cont;
}

void cpyS(char *a,char *b,int tam)
{
   int i,j=0;  
   for(i=0;i<tam;i++)
   b[i]=' ';
   
  
   for(i=0;i<50;i++)
    {
          if(a[i] >= 65 && a[i] <= 90 ||  a[i] >= 97 && a[i] <= 122 )
          {
            b[j] = a[i];
            j++;
          }
    } 
    
    
}

void rcpyS(char *a,char *b,int tam)
{
   int i,j=tam-1;  
  
   
   
   for(i=0;i<tam;i++)
    {
          b[i]=a[j];
          j--;
    } 
    
    
}

int cmpS(char *a,char *b,int tam)
{
   int i,j=tam-1;  
  
  //printf("%s    %s",a,b);
   for(i=0;i<tam;i++)
    {
          if(a[i]!=b[i])           
          {
              return 0;
              
              
          }
    }
    return 1;
    
}
