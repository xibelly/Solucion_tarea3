/* Xibelly Eliseth Mosquera Escobar

3) Division entera. Escriba un programa que calcule el numero de veces que se puede dividir un numero entre dos.
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
  
}
