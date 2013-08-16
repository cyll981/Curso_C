#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define C 6
#define R 6

void rellenar(int [C][R]);
void imprimir(int [C][R]);
void dupmat(int, int, int, int, int[][R], int [][R]);

int main()
{
  int valor;
  int a[6][6];
  int b[6][6];
  rellenar(a);
  system("pause");
  rellenar(b);
  imprimir(a);
  printf("\n");
  imprimir(b);
  dupmat(1,4,1,3,a,b);
  printf("\n");
  printf(" Esta es la matriz 1 despues de dubmat:\n");
  imprimir(a);
  printf("Esta es la matriz 2 despues de dubmat:\n");
  imprimir(b);
  
  return 0;
}

void rellenar(int cad[C][R])
{
   
   int i,j;
   srand(time(NULL));
   for(i=0;i< 6;i++)
   {
	  for(j=0;j<6;j++)
      cad[i][j]=rand()%10;
   }
   
   
}

void imprimir(int cad[C][R])
{
   
   int i,j;
   
   for(i=0;i< 6;i++)
   {
	  for(j=0;j<6;j++)
      printf("%i ",cad[i][j]);
	  printf("\n");
   }
   
   
}

void dupmat(int a, int b, int c, int d, int cad[][R], int  cad2[][R])
{
	int i,j;
	
	
	
	for(i=a;i<b;i++)
		for(j=c;j<d;j++)
		{ 
		cad[i][j] = cad2[i][j];
		}
		
}