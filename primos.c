/* Xibelly Eliseth Mosquera Escobar

Escriba un programa que calcule los números primos menores que Xmax. El programadebe recibir Xmax y como resultado debe imprimir en pantalla todos los números primos menores que Xmax.
 */
 
/*
 Analisis y diseño
 
 Para resolver nuestro problema necesitamos
 
 -recivir el numero Xmax, esto se hara por linea de comandos

 -buscar los numeros primos menores que Xmax, para ello debemos imponer una condicion que nos permita saber cuando un numero es un nuemro primo.
 
 -para llevar a cabo el punto anterior vamos hacerlo dentro de un loop, donde la condicion de parada es Xmax

-debemos imprimir todos los numeros primos hayados

 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


///////////////////////////////Programa principal////////////////////
int main(int argc, char **argv){

  int i, Xmax, result;
  
  Xmax   = atoi(argv[1]);
  
  
  for(i=0; i<Xmax; i++)
    {
      result = (2 * i) + 1;

      if (result == 1)continue;  //El numero 1 no se considera ni par ni e impar 
      
      if (result < Xmax)
	printf("%d \n",result);
	        
    }


  return 0;
  
}
