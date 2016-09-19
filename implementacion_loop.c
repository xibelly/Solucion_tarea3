/* Xibelly Eliseth Mosquera Escobar
 14) Escriba un programa que implemente la realización de un loop como el que se presenta a 
continuación
for (loop=0; loop<10; loop++) {
    for (i=0; i<N; i++) {
    ... = ... x[i] ...
    }
   }
y luego el mismo código pero usando el segundo orden
for (i=0; i<N; i++) {
for (loop=0; loop<10; loop++) {
... = ... x[i] ...
}
}
Cual ejecución demora mas? Por que?
 */

/*
Analisis y diseño
Para resolver nuestro problema vamos a diseñar un codigo que nos permita visualizar cual de ambos caso es el que menos tarda, para ello necesitamos:
-recivir el numero de iteraciones, para ello los resiviremos por linea de comandos
-hacer uso de la funcion clock() para calcular el tiempo de ejecucion
-imprimir en pantalla el tiempo de ejecucion en cada caso
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//////////////////////Variables Globales/////////////////////
int N, i, loop;
clock_t tini, tend, tacum;
double cpu_time_used;
double *x,*y;

///////////////////////Funciones///////////////////////////
caso1(double *x)
{  
  tini = clock();
  for(loop=0; loop<10; loop++)
    {
      
      for(i=0; i<N; i++)
	{
	  y[i] = x[i] * loop;
	  
	}
    }
  tend = clock();
  
  cpu_time_used = ((double) (tend - tini)) / CLOCKS_PER_SEC;
  
  printf("tiempo CPU caso1: %g\n",cpu_time_used);

  return 0;
}  

caso2(double *x)
{
  
  tini = clock();
  
  for(i=0; i<N; i++)
    {
      for(loop=0; loop<10; loop++)
	{
	  y[i] = x[i] * loop;
	}
    }
  tend = clock();
  
  cpu_time_used = ((double) (tend - tini)) / CLOCKS_PER_SEC;
  
  printf("tiempo CPU caso2: %g\n",cpu_time_used);

  return 0;
}  


/////////////////////////Programa Principal////////////////////
int main(int argc, char **argv){

 
  printf("%d\n",argc);

  if(argc != 2)
    {
      printf("ERROR--> use as:\n");
      printf("%s #iteraciones\n",argv[0]);
      exit(0);  
    }
  
  N   = atoi(argv[1]);
    
  printf("%d \n",N);

  x = (double *)malloc(N* sizeof(double));
  y = (double *)malloc(N* sizeof(double));


  for(i=0; i<N; i++)
    {
      x[i] = i*i*1.0;
      printf("%lf\n",x[i]);
    
    }


  caso1(x);

  caso2(x);

  free(x);
  free(y);
  
  
  return 0;
  
}
