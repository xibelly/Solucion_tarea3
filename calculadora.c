/* Xibelly Eliseth Mosquera Escobar

 5)Escriba un programa que calcule la suma, resta, multiplicacion y division de dos operandos. Para cada operacion escribir una funcion. El programa debe reciviir en orden, primer operando, operador, segundo operando y producir en pantalla e resultado de la operacion.

 */

/*
 Analisis y diseño
 
 Para calcular cada operacion necesitamos
 
 -entrehgar los terminos de la operacion y la operacion, ejm: 1 suma 2. esto se hara por linea de comandos
 
 -estableces una condiccion que lea que operacion va a hacerse y ejecute dicha operacion
 
 -crear funciones para cada operacion, tal que en el punto anterior se llame a la funcion que corresponda
 
 -imprimir en pantalla los resultados correpondientes a la operacion indicada
  
  

*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


/////////////////////////FUNCIONES ///////////////////////////////
suma(double x, double y)
{
  double result;

  result = x + y;

  printf("%lf + %lf = %lf\n",x, y, result);
}


resta(double x, double y)
{
  double result;

  result = x - y;

  printf("%lf - %lf = %lf\n",x, y, result);
}

multiplicacion(double x, double y)
{
  double result;

  result = x * y;

  printf("%lf * %lf = %lf\n",x, y, result);
}


division(double x, double y)
{
  double result;

  result = x / y;

  printf("%lf / %lf = %lf\n",x, y, result);
}
////////////////////////////////////////////////////////////


/////////////////////////////////////////PROGRAMA PRINCIPAL//////////////////////
int main(int argc, char **argv){

  double term1, term2;
  
  int ret;
  
  char *operacion = NULL;

  char *SUMA = "suma";

  char *RESTA = "resta";

  char *MULTIPLICACION = "multiplicacion";

  char *DIVISION = "division";
  
  printf("%d\n",argc);

  if(argc != 4)
    {
      printf("ERROR--> use as:\n");
      printf("%s termino1 operador termino2\n",argv[0]);
      exit(0);  
    }
  

  term1   = atof(argv[1]);
  
  operacion = argv[2];

  term2   = atof(argv[3]);



  ret = strcmp(operacion,SUMA);

  if(ret == 0)
    {
      suma(term1, term2);
    }


  ret = strcmp(operacion,RESTA);

   if(ret == 0)
    {
      resta(term1, term2);
    }

   
   ret = strcmp(operacion,MULTIPLICACION);

   if(ret == 0)
     {
       multiplicacion(term1, term2);
     }
  
   ret = strcmp(operacion,DIVISION);

   if(ret == 0)
     {
       division(term1, term2);
     }
  
 

  return 0;
  
}
