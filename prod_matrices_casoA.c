/* Xibelly Eliseth Mosquera Escobar
 15) Escriba tres programas para calcular la multiplicación de dos matrices usando como algoritmos 
centrales las siguientes formas
a) Caso a
for i=1..n
for j=1..n
for k=1..n

c[i,j] += a[i,k]*b[k,j]

b) Caso b
for i=1..n
for k=1..n
for j=1..n
c[i,j] += a[i,k]*b[k,j]

c) Caso c
for k=1..n:
for i=1..n:
for j=1..n:
c[i,j] += a[i,k]*b[k,j]

Cual método funciona mas rápido? Cambian los resultados con cada implementación?
 */

/*
Analisis y diseño
Para resolver nuestro problema vamos a diseñar un codigo que nos permita visualizar cual de todos los caso es el que menos tarda, para ello necesitamos:
-recivir el valor de n, para ello los resiviremos por linea de comandos
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
int N;
///////////////////////Funciones///////////////////////////
casoA()
{
  
  int i, j, k;
  double a[N][N];
  double b[N][N];
  double c[N][N];
 
  FILE *pf =NULL;

  pf = fopen("prod_matrices_casoA.dat","w");
   
  for(k=0; k<N; k++)
    {
      for(i=0; i<N; i++)
	{
	  a[i][k] = 1.0;
	  
	}
    }

  for(k=0; k<N; k++)
    {
      for(j=0; j<N; j++)
	{
	  b[k][j] = j*1.0;
	  
	}
    }

  tini = clock();
  
  for(k=0; k<N; k++)
    {
  
      for(j=0; j<N; j++)
	{
	  
	  for(i=0; i<N; i++)
	    {
	      c[i][j] += a[i][k] * b[k][j];
	      fprintf(pf,"%lf\n",c[i][j]);
	    }
	}
      
      tend = clock();
      
      cpu_time_used = ((double) (tend - tini)) / CLOCKS_PER_SEC;
      
    }
  printf("tiempo CPU casoA: %g\n",cpu_time_used);

  fclose(pf);
  
  return 0;
}  



/////////////////////////Programa Principal////////////////////
int main(int argc, char **argv){

  printf("%d\n",argc);

  if(argc != 2)
    {
      printf("ERROR--> use as:\n");
      printf("%s length \n",argv[0]);
      exit(0);  
    }
  
  N  = atoi(argv[1]);
  
  
  printf("%d\n", N);

  casoA();

  return 0;
  
}
