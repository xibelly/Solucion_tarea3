/*
Xibelly Eliseth Mosquera Escobar 

4) Escriba un programa que calcule el factorial de un numero x.

*/


/*
  Analisis y diseño
  
  Nuestro problema es el de calcular el factorial de un #
  
  n ! = (n -1)* n
  
  Como en problemas anteriores se hizo uso de la funcion factorial en este caso tambien lo haremos, de tal modo que 
  llamamos dicha funcion en las directivas de pre-procesamiento, y unicamente debemos entregar el # al que se le desea saber
  el factorial, esto se hara a traves de linea de comandos

*/



#include<stdio.h>
#include<stdlib.h>
#include"factorial.h"


int main(int argc, char **argv)
{
  double x;

  x = atof(argv[1]);

  factorial(x);

  printf("(%lf)! = %f\n",x, factorial(x));

  return 0;
}
