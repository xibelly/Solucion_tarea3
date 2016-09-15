/* Xibelly Eliseth Mosquera Escobar

 11) Se menciono en clase que hacer un buen uso de los registros puede ser conveniente para efectos de 
optimizar el usos del tiempo de computo.
Escriba un programa que a través de una secuencia de iteraciones muestre que en efecto hacer la optimización 

t1 = sin(alpha) * x + cos(alpha) * y;
t2 = ­cos(alsph) * x + sin(alpha) * y;
s = sin(alpha); c = cos(alpha);
t1 = s * x + c * y;
t2 = ­c * x + s * y

conduce a una ganancia de tiempo de cpu.
Haga una gráfica de tiempo de ejecución como función del numero de iteraciones y úsela para concluir 
para cuantas iteraciones se vuelve importante considerar la optimización mencionada

 */

/*
Analisis y diseño

Para resolver nuestro problema necesitamos:

-recivir el # en grados y pasarlo a radianes, para ello lo resiviremos por linea de comandos

-pasar el numero de iteraciones (N), de nuevo se hara por linea de comandos

-hacer uso de la funcion clock() para calcular el tiempo de ejecucion

-imprimir el tiempo de ejecucion y el # de iteraciones

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define pi 3.141592

modo1(double alpha, int Ntot, double x, double y)
{
  double t1, t2, tini, tend, tacum;
  int i,j;
  
  for(j=0; j<10; j++)
    {
      tini = clock();
      for(i=0; i<Ntot; i++)
	{
	  t1 = sin(alpha)*x + cos(alpha)*y;
	  t2 = -cos(alpha)*x + sin(alpha)*y;  
	}
      tend = clock();

      printf("%16.8lf %16.8lf %16.8lf\n",t1 ,t2 , tend-tini);
      tacum += tend-tini;
    }
  
  
  printf("%16.8e %16.8lf %16.8lf\n", t1, t2, tacum/10.0);

}  



int main(int argc, char **argv){

  int N,i;
  double angulo, radianes, x, y;

  printf("%d\n",argc);

  if(argc != 5)
    {
      printf("ERROR--> use as:\n");
      printf("%s angulo #iteraciones\n",argv[0]);
      exit(0);  //termina elegante mente la ejecuacion del programa
    }
  
  angulo   = atof(argv[1]);
  radianes = angulo*pi/180.0;
  N        = atoi(argv[2]);
  x        = atoi(argv[3]);
  y        = atoi(argv[4]);
  
  printf("%lf %d %lf %lf\n", angulo, N, x, y);
  
  modo1(angulo, N, x, y);
  
    
  //printf("sen( %lf grados) = %f\n",angulo,suma);
  
  return 0;
  
}
