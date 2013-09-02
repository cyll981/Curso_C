#include<stdio.h>
#include<stdlib.h>


// int (*mat)[2]; apuntador a  matriz
//fin de cadena '/0'
typedef struct
{
   int w;
   int vel;
   int ban;
}Carro;

int menorV(Carro *c,int nV);
int menV(int *a,int nV);
float op(int lP,int c);
int main()
{
   int wP, lP, nV,i;
   int s,r,t,rep=0,k;
   float tiempo;
   int aux,pes,pes2;
   int *sumV;
   int *sumV2;
   float *sumt;
   int *aux2;
   
   scanf("%i %i %i",&wP,&lP,&nV);
   Carro *carros = (Carro*)malloc(sizeof(Carro)*nV);
   sumV = (int*)malloc(sizeof(int)*nV);
   sumV2 = (int*)malloc(sizeof(int)*nV);
   sumt = (float*)malloc(sizeof(float)*nV);
   aux2 = (int*)malloc(sizeof(int)*nV);
   
   for(i=0;i<nV;i++)
   {
       scanf("%i %i",&carros[i].w,&carros[i].vel);
	   carros[i].ban = 0;
   }
   for(i=0;i<nV;i++)
   {
      sumV[i]=10000;
	  sumV2[i]=10000;
	  sumt[i] = 0;
	  aux2[i] = 5000;
   }
  /* for(i=0;i<nV;i++)
   {
       printf("%i %i\n",carros[i].w,carros[i].vel);
   }*/
 t=0; 
 k=0;
printf("\n");

while(rep < nV)
{ 
   for(i=0;i<nV;i++)
   {
      sumV[i]=10000;
	  sumV2[i]=10000;
	}
   r=0;
   s=0;
  
   pes=0;
   
   aux = menorV(carros,nV);
   //printf("%i",aux);
   
   for(i=0;i<nV;i++)
   if(aux2[i] == aux || carros[aux].ban == 1)
   k = 6666;
   
   if(k == 6666)
   break;
   carros[aux].ban = 1;
   pes = carros[aux].w; 
   pes2 = carros[aux].w;
   printf("pes=%i  pes2=%i  aux=%i\n",pes,pes2,aux);
   //printf("carros[aux].w= %i  carros[aux].ban= %i  wP= %i\n",carros[aux].w,carros[aux].ban,wP);
   if(aux != 0)
   {
      
      //printf(" carros[aux].w= %i carros[aux].ban= %i wP= %i\n",carros[aux].w,carros[aux].ban,wP);
      if(carros[aux].w < wP)
	  {
	     
		for(i=aux-1; i>=0;i--)
		{
			if(carros[i].w + pes <= wP && carros[i].ban != 1)
			{
			   pes += carros[i].w;
			   
			   sumV[r] = carros[i].vel;
			   //printf("peso pes=%i sumaV=%i",pes,sumV[r]);
			   r++;
			}
			else
			{
			   break;
			}
		}
		for(i=aux+1; i < nV; i++)
		{
			if(carros[i].w + pes2 <= wP && carros[i].ban != 1)
			{
			   
			   pes2 += carros[i].w;
			   sumV2[s] = carros[i].vel;
			   //printf("peso pes=%i sumaV2=%i",pes2,sumV2[s]);
			   s++;
			}
			else
			{
			   break; 
			}
		}
		  //printf("aux=%i sumV=%i   sumV2=%i",aux,menV(sumV,nV),menV(sumV2,nV));
		  
		
		pes = carros[aux].w;;
		pes2 = carros[aux].w;;
		if( menV(sumV,nV) < menV(sumV2,nV))
		{
		  
		  for(i=aux-1; i>=0;i--)
		  {
			if(carros[i].w + pes <= wP && carros[i].ban != 1)
			{
			   pes += carros[i].w;
			   printf("%i \n",carros[i].w);
			   carros[i].ban = 1;
			}
			else 
			  break;
			
		  } 
		  printf("%i \n",carros[aux].w);
		  sumt[t] = op(lP,carros[aux].vel) ;
			
			//printf("\n1 sumt= %f",sumt[t]);
			t++;
		}
		else
		{
		  
		  for(i=aux+1; i< nV;i++)
		  {
		    
			if(carros[i].w + pes2 <= wP && carros[i].ban != 1)
			{
			   
			   pes2 += carros[i].w;
			   printf("%i \n",carros[i].w);
			   carros[i].ban = 1;
			   
			}
			else 
			break;
			
			
		  } 
		  printf("%i \n",carros[aux].w);
		  sumt[t] = op(lP,carros[aux].vel) ;
			
			
			//printf("\n2 sumt= %f",sumt[t]);
			t++;
		}
		//printf("\nValor de t=%i\n",t);
		
	  }
	  else
	  {
	    
	    printf("%i \n",carros[aux].w);
	    sumt[t]= op(lP,carros[aux].vel);
		//printf("\t3 sumt=%f\n",sumt[t]);
		t++;
		//printf("\nValor de t=%i",t);
	  }
   }
   else
   {
      //printf("Entre");
      if(carros[aux].w < wP)
	  {
		
		for(i=aux+1; i < nV; i++)
		{
			if(carros[i].w + pes2 <= wP && carros[i].ban != 1)
			{
			   pes2 += carros[i].w;
			   sumV2[s] = carros[i].vel;
			   //printf("peso pes=%i sumaV2=%i",pes,sumV2[s]);
			   s++;
			}
			else
			{
			   break; 
			}
		}
		 // printf("aux=%i sumV2=%i",aux,menV(sumV2,nV));
		  
		
		
		pes2 = carros[aux].w;;
		
		
		  
		for(i=aux+1; i< nV;i++)
	    {
		    
			if(carros[i].w + pes2 <= wP && carros[i].ban != 1)
			{
			   
			   pes2 += carros[i].w;
			   printf("%i \n",carros[i].w);
			   carros[i].ban = 1;
			   
			}
			else 
			break;
			
			
		} 
		printf("%i \n",carros[aux].w);
		sumt[t] = op(lP,carros[aux].vel) ;
		//printf("\n2 sumt= %f",sumt[t]);
		t++;
		
		//printf("\nValor de t=%i\n",t);
		
	  }
	  else
	  {
	    printf("%i \n",carros[aux].w);
	    sumt[t]= op(lP,carros[aux].vel);
		//printf("\t3 sumt=%f\n",sumt[t]);
		t++;
		//printf("\nValor de t=%i",t);
	  }
   }
   aux2[k] = aux;
   k++;
  rep++; 
   printf("\n");
 }  
   
  tiempo =0;
    for(i=0;i<nV;i++)
    {
       tiempo += sumt[i];
    }  
   printf("\n%.2f",tiempo);
   
   free(carros);
   free(sumV);
   free(sumV2);
   free(sumt);
   
   return 0;
}

int menorV(Carro *c,int nV)
{
   int aux=0,i=1,cont=0,j=0;
   
   while(cont == 0)
   { 
      if(c[aux].ban == 0)
	  {
	     //printf("hola");
	     if(c[aux].vel > c[i].vel && c[i].ban == 0)
		 {
		    aux = i;
		 }		 
	  }
	  else
	  {
	    //printf("hola2");
	    aux++;
	  }
	  i++;
	  j=0;
	  /*while(j < nV)
	  {printf("peso = %i ban = %i\n",c[j].w,c[j].ban);
	  j++;}*/
	  printf("\n");
	  if(i == nV)
	  {
	    
		return aux;
	  }
   }
   
}

int menV(int *a,int nV)
{
  printf("\n");
	int i,min;
    min = 0;	
   for(i=1;i< nV;i++)
   {
      //printf("%i  ",a[i]);
      if(a[min] >= a[i])
		min = i;
   }
   //printf("%i",a[min]);
   return a[min];
}

float op(int lP, int c)
{
   float temp =( float)c/60;
         temp=(float)lP/temp;
  
   //printf("\tc=%f",temp);
   return temp;   
}