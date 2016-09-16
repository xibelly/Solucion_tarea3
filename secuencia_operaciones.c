/* Xibelly Eliseth Mosquera Escobar
 12) Se tiene la siguiente secuencia de operaciones.
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
clock_t tini, tend, tacum;
double cpu_time_used;

///////////////////////Funciones///////////////////////////
caso1(int L)
{
  
  int i, c, *a, *b;
  
  c = 1;

  a = (int *) malloc(L *sizeof(int));
  b = (int *) malloc(L *sizeof(int));

  for(i=0; i<L; i++)
    {
      b[i] = i;
      
    }
  
  tini = clock();
  for(i=0; i<L; i++)
    {
      a[i] = b[i] * c;
      
    }
  tend = clock();
  
  cpu_time_used = ((double) (tend - tini)) / CLOCKS_PER_SEC;
  
  printf("tiempo CPU caso1: %g\n",cpu_time_used);

  return 0;
}  

caso2(int L, int V)
{
  int i, j;
  int a[L][V], b[L][V];
  int c[V];

  for(j=0; j<V; j++)
    {
      c[j]    = 1;
           
      for(i=0; i<L; i++)
	{
	  b[i][j] = i;
	  
	}
    }

  tini = clock();
  for(j=0; j<V; j++)
    {
           
      for(i=0; i<L; i++)
	{
	  a[i][j] = b[i][j] * c[j];
	  
	}
      
      tend = clock();
      
      cpu_time_used = ((double) (tend - tini)) / CLOCKS_PER_SEC;
      
    }
  printf("tiempo CPU caso2: %g\n",cpu_time_used);
  
  return 0;
   
}  


/////////////////////////Programa Principal////////////////////
int main(int argc, char **argv){

  int length, nvectors, i;

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

  caso1(length);

  caso2(length, nvectors);
  
  return 0;
  
}
