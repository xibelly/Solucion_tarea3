/* Xibelly Eliseth Mosquera Escobar

 2) Escribir un programa que utilice la serie de taylor de la funcion coseno(alrededor de x=0) para calcular el coseno de un angulo. El programa debe recibir como entrada el valor del angulo (x) en grados y en el numero de terminos (N) de la serie a usarse en la expansion, y retornar en pantalla el valor de sen(x).

 */
 /*
 Analisis y diseño
 
Para resolver el problema de calcular el seno de un # usando la serie de taylor centrada en x=0
 
  cos(x) = sum_n=0^inf ( (-1)^n x^{2n} )/ (2n)!                                 (1)
Necesitamos:

-recivir el # en grados y pasarlo a radianes, para ello lo resiviremos por linea de comandos
-pasar el numero de iteraciones (N), de nuevo se hara por linea de comandos
-crear una funcion que calcule el factorial de un numero
-que al calcular cada termino de la ecu (1) estos se vayan sumando, tal que el resultado sea la suma de  todas las iteraciones hechas
-retornar en pantalla el valor del coseno del numero que se pasa por linea de comandos
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"factorial.c"

#define pi 3.141592


int main(int argc, char **argv){

  int N,i;
  double angulo, term, numerador, denominador, suma,coseno_x, radianes;
  
  angulo   = atof(argv[1]);
  radianes = angulo*pi/180.0;
  N        = atoi(argv[2]);

  suma = 0.0;
  
  for(i=0; i<N; i++)
    {
      term         = (2.0*i) ;
      
      numerador    = pow(-1,i) * pow(radianes,term);

      denominador  = factorial(term);
             
      coseno_x       = numerador / denominador; 

      suma         = suma + coseno_x;

      
    }
 
    
  printf("cos( %lf grados) = %f\n",angulo,suma);
  
  return 0;
  
}
