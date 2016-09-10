/* Xibelly Eliseth Mosquera Escobar

 5)Escriba un programa que calcule la suma, resta, multiplicacion y division de dos operandos. Para cada operacion escribir una funcion. El programa debe reciviir en orden, primer operando, operador, segundo operando y producir en pantalla e resultado de la operacion.

 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

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



int main(int argc, char **argv){

  double term1, term2;
  
  int ret;
  
  char *operacion = NULL;

  char *SUMA = "suma";

  char *RESTA = "resta";

  char *MULTIPLICACION = "multiplicacion";

  char *DIVISION = "division";
  

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
