/* Xibelly Eliseth Mosquera Escobar

3) Division entera. Escriba un programa que calcule el numero de veces que se puede dividir un numero entre dos.
 */
 
/*
Analisisi y diseño

Nuestro problema es e l siguiente:

	a/2 = b + r;    	b: resultado  r:residuo

Para llevar  a dicha operacion necesitamos:

-pasar  el # que sera dividido, esto se hara por linea de comando

-al hacer la division por dos vamos a establecer que se tome la parte inferior de la operacion, para ello hacemos uso de "floor".
Esta operacion se realiza un numero n de veces hasta que se cumpla que el resultado es 1 y el residuo es 0

-calcular el numero n de operaciones que se realizan e imprimir en patalla 

*/



#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char **argv){

  int suma;

  double numero, x, y, z;

  numero   = atof(argv[1]);
   
  x = floor (numero*0.5);
  
  suma = 1;

  if(x != 1)
    {
      y = floor (x*0.5);

      suma ++;

      if(y != 1)
	{
	  z = floor (y*0.5);

	}
      suma ++;
    }
  

  printf("divison entera %d\n",suma);
  
  return 0;
  
}
