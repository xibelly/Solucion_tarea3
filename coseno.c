/* Xibelly Eliseth Mosquera Escobar

 2) Escribir un programa que utilice la serie de taylor de la funcion coseno(alrededor de x=0) para calcular el coseno de un angulo. El programa debe recibir como entrada el valor del angulo (x) en grados y en el numero de terminos (N) de la serie a usarse en la expansion, y retornar en pantalla el valor de sen(x).

 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"factorial.h"

#define pi 3.141592


int main(int argc, char **argv){

  int N,i,term,denominador;
  double angulo,numerador, suma,coseno_x, radianes;
  
  angulo   = atof(argv[1]);
  radianes = angulo*pi/180.0;
  N        = atoi(argv[2]);

  suma = 0.0;
  
  for(i=0; i<N; i++)
    {
      term         = (2*i) ;
      
      numerador    = pow(-1,i) * pow(radianes,term);

      denominador  = factorial(term);
             
      coseno_x       = numerador / denominador; 

      suma         = suma + coseno_x;

      
    }
 
    
  printf("cos( %lf grados) = %f\n",angulo,suma);
  
  
}
