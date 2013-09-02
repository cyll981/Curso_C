
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Descif(char **cif,char *descif, int cols);

main()
{
 int i,j,k,s=0,l=0;
 char ap[30][200];
 int cols=1;
 char **cif;
 char descif[30][200];
 
 
 while(cols != 0)
 {
 
 //printf("Dame num columnas: ");
 scanf("%i",&cols);
 if(cols == 0)
 break;
 fflush(stdin);
 //printf("Dame tu oracion: ");
 gets(ap[l]);
 
 cif = malloc(sizeof(char*)*cols+1);
 
 for(i=0;i<cols+1;i++)
 {
     cif[i] = malloc(sizeof(char)*cols); 
 }
 
 
 
 
 k=0;
 for(i =0 ; i<cols+1;i++)
 {
    for(j=0 ; j<cols;j++)
    {
      cif[i][j] = ap[l][k];
	  k++;
    }
 }
    Descif(cif,descif[l],cols);
	l++;
	
 }
 
 
 for(j=0;j < l;j++)
 {
 for(i =0 ; i<strlen(ap[j]);i++)
 {
    
      printf("%c",descif[j][i]);
 }
 printf("\n");
 }
 for(i=0;i<cols+1;i++)
 {
     free(cif[i]);
	 
 }
  return 0;
 }
 
 void Descif(char **cif,char *descif, int cols)
 {
    int i,j,r,k,aux=0;
	for(i=0;i<cols+1;i++)
    {
     if(i == 0)
	 {
	 
     for(j=0;j<cols;j++)
	 {
	   
	    k = i;
	    r=j;
		while(r >= 0)
		{
		   descif[aux]=cif[k][r];
		   
		   k++;
		   r--;
		   aux++;
		}
	 }
	 }
	 else
	 {
	    r = cols-1;
		
	    for(j = i; j < cols+1; j++)
		{
		   descif[aux] = cif[j][r];
           r--;
           aux++;		   
		}
		  
	 }
	 
    }
 }
 
 
 
 
 
 
 //char (*cod)[]
 