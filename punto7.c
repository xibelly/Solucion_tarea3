/* Xibelly Eliseth Mosquera Escobar

 Precedencia de operadores.
Escriba un programa que evalúe la siguiente operación
sin( x)+ cos( x) /2 (a+ b)

Utilizando explícitamente la siguiente implementación de la función (implementar cada caso en una
función diferente en el mismo programa)
f1(x) = sin(x) + cos(x)/2 * a + b
f2(x) = sin(x) + cos(x)/2 * (a + b)
f3(x) = (sin(x) + cos(x)/2) * a + b
f4(x) = ((sin(x) + cos(x))/2)*(a+b)
a) Cual es la implementación correcta?
b) En cada caso, en que se diferencia cada implementación de la formula correcta?
c) Que aprendió sobre la precedencia de los operadores en este ejemplo?
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


/////////////////////////////////variables globales/////////////////////
#define pi 3.141592

////////////////////////////////////////funciones///////////////////
f1(double x, double a, double b)
{
  
  double result;
  
  result = sin(x) + cos(x) * 0.5 *a + b;

   printf("f1 = %lf\n",result);

}

f2(double x, double a, double b)
{
  
  double result;
  
  result = sin(x) + cos(x) * 0.5 *(a + b);

  printf("f2 = %lf\n",result);
}

f3(double x, double a, double b)
{
  
  double result;
  
  result = ( sin(x) + cos(x) * 0.5) * a + b;

  printf("f3 = %lf\n",result);
}

f4(double x, double a, double b)
{
  
  double result;
  
  result = ( ( sin(x) + cos(x) ) * 0.5) *(a + b);
  
  printf("f4 = %lf\n",result);
}



///////////////////////////////Programa principal////////////////////
int main(int argc, char **argv){


  double angulo, radianes, a, b;
  
  angulo   = atof(argv[1]);
  radianes = angulo*pi/180.0;

  a        = atof(argv[2]);
  b        = atof(argv[3]);

  f1(radianes,a,b);
  f2(radianes,a,b);
  f3(radianes,a,b);
  f4(radianes,a,b);

  return 0;
  
}
