/* Xibelly Eliseth Mosquera Escobar

13)Problema 12 pero en formato float

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
int length, nvectors;
///////////////////////Funciones///////////////////////////
caso1()
{
  int i;
  float c, *a, *b;
  
  c = 1.0;

  a = (float *) malloc(length *sizeof(float));
  b = (float *) malloc(length *sizeof(float));

  for(i=0; i<length; i++)
    {
      b[i] = i*1.0;
      
    }
  
  tini = clock();
  for(i=0; i<length; i++)
    {
      a[i] = b[i] * c;
      
    }
  tend = clock();
  
  cpu_time_used = ((double) (tend - tini)) / CLOCKS_PER_SEC;
  
  printf("tiempo CPU caso1: %g\n",cpu_time_used);

  return 0;
}  

caso2(float B[length][nvectors], float C[nvectors])
{
  int i, j;
  
  float A[length][nvectors];

  tini = clock();
  for(j=0; j<nvectors; j++)
    {
           
      for(i=0; i<length; i++)
	{
	  A[i][j] = B[i][j] * C[j];
	  
	}
      
      tend = clock();
      
      cpu_time_used = ((double) (tend - tini)) / CLOCKS_PER_SEC;
      
    }
  printf("tiempo CPU caso2: %g\n",cpu_time_used);
  
  return 0;
   
}


/////////////////////////Programa Principal////////////////////
int main(int argc, char **argv){

  
  int i, j;
  
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

  /////////////////////////////////////

  caso1();

  /////////////////////////////////////
  float C[nvectors];
  float B[length][nvectors];

   for(j=0; j<nvectors; j++)
    {
      C[j]    = 1.0;
      
      for(i=0; i<length; i++)
	{
	  B[i][j] = i*1.0;
	  
	}
    }

   ///////////////////////////////////

  caso2(B, C);

  ///////////////////////////////////
  return 0;
  
}
