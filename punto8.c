/* Xibelly Eliseth Mosquera Escobar

Escriba un programa que calcule los números primos menores que Xmax. El programadebe recibir Xmax y como resultado debe imprimir en pantalla todos los números primos menores que Xmax.
 */
 
/*
 Analisis y diseño
 
 Para resolver nuestro problema necesitamos
 
 -recivir el numero Xmax, esto se hara por linea de comandos

 -buscar los numeros primos menores que Xmax, para ello debemos imponer una condicion que nos permita saber cuando un numero es un nuemro primo, podriamos crear una funcion que haga dicho calculo, esto es, que calcule si el numero dado es dividible por si mismo y por la unidad.
 
 -para llevar a cabo el punto anterior vamos hacerlo dentro de un loop, donde la condicion de parada es Xmax

-debemos imprimir todos los numeros primos hayados

 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


/////////////////////////////////variables globales/////////////////////
//#define pi 3.141592

////////////////////////////////////////funciones///////////////////
/*primo(int numero)
{
  
  int result, result2;
  
  result = numero / numero;

  result2 = numero / numero+1;

  if((result == 1) && (result == numero))

    //printf("primo = %lf\n",result);

    }*/


///////////////////////////////Programa principal////////////////////
int main(int argc, char **argv){

  double i, j, Xmax;
  
  Xmax   = atof(argv[1]);
  
  double result[Xmax];

  for(i=2.0; i<Xmax; i=i+1.0)
    {
      for(j=1.0; j<Xmax; j=j+1.0)
	{
	  result[j] = (i / j);

	  

	  if((result != 1) && (result != i))
	    {
	      printf("%lf no es primo\n",i);
	    }

	}
    }


  return 0;
  
}
