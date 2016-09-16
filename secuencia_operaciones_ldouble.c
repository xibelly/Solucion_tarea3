/* Xibelly Eliseth Mosquera Escobar

 13) Punto 12 en long double

Punto 12)

Se tiene la siguiente secuencia de operaciones.

En el primer caso 
 for i=1,length
   a[i] = b[i] * c

En el segundo caso
 for k=1,nvectors
   for i=1,length
       a[i] = b[i] * c[i]
Donde todos los valores de c[i] tienen el mismo valor. Cual código tarda mas?

 */

/*
Analisis y diseño

Para resolver nuestro problema vamos a diseñar un codigo que nos permita visualizar cual de ambos caso es el que menos tarda, para ello necesitamos:

-recivir el valor de lenght y de nvector, para ello los resiviremos por linea de comandos

-hacer uso de la funcion clock() para calcular el tiempo de ejecucion

-imprimir en pantalla el tiempo de ejecucion en cada caso

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//////////////////////Variables Globales/////////////////////
long double *a, *b;


///////////////////////Funciones///////////////////////////
caso1(int L)
{
  int i;
  long double  tini, tend, tacum;
  long double  c;

  c = 1.0;
  
  tini = clock();
  for(i=0; i<L; i++)
    {
      a[i] = b[i] * c;
    }
  tend = clock();
  tacum += (tend-tini)/L;
  
  printf("tiempo caso1: %LF\n",tacum);
  
}  

caso2(int L, int V)
{
  long double  tini, tend, tacum;
  int i, j;
  long double  *c;

  c = (long double  *) malloc(V *sizeof(long double ));

  for(j=0; j<V; j++)
    {
      tini = clock();
      for(i=0; i<L; i++)
	{
	  c[i] = 1.0;
	  a[i] = b[i] * c[i];
	}
   
      tend = clock();
      tacum += (tend-tini)/V;
  
      
    }
  printf("tiempo caso2: %LF\n",tacum);

   
}  


///////////////////////////////////////////////////////////////


/////////////////////////Programa Principal////////////////////
int main(int argc, char **argv){

  int length, nvectors;
 

  printf("%d\n",argc);

  if(argc != 3)
    {
      printf("ERROR--> use as:\n");
      printf("%s length nvectors\n",argv[0]);
      exit(0);  
    }
  
  length          = atoi(argv[1]);
  nvectors        = atoi(argv[2]);
  
  printf("%d %d\n", length, nvectors);
  
  a = (long double  *) malloc(length *sizeof(long double ));
  
  b = (long double  *) malloc(length *sizeof(long double ));

  caso1(length);

  caso2(length, nvectors);
  
  return 0;
  
}