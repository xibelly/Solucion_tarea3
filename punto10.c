/* Xibelly Eliseth Mosquera Escobar

 10) Escriba un programa que calcule el numero pi usando dos aproximaciones diferentes

pi1 ­> 2/π = (√2) / 2 . (√(2+ √2) )/2 . √(2+ (√(2 + √2)))/2 ...

pi2 ­> π/4 =1 −1/3  + 1/5  − 1/7  + 1/9 − 1/11 + ...
 
Calcule pi en cada aproximación implementándola en una función distinta en cada caso (en el mismo
programa). El programa debe recibir el numero de términos en las expansiones a usarse para el calculo
de p y debe imprimir en pantalla los dos valores de p obtenidos.
 */

/*
  Analisis y diseño

 Para resolver el problema de calcular el valor de pi a partir de las dos aproximacioned, necesitamos:

-recivir el numero de terminos en la expansio, esto se hara por linea de comandos

-implementar cada aproximacion en una funcion distinta

-imprimir en pantalla los valores de pi en cada caso

 */



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



////////////////////////////////////////funciones///////////////////
pi1(int n)
 {
   int i;
   double  suma, producto, pi;

   
   suma       = 0.0;

   producto   = 1.0;
   
   for(i=0; i<n; i++)
     {
       suma     = sqrt(suma+2.0) ;

       producto =  producto * suma *0.5;

       pi = 2.0 / producto;
       
              
     }
   printf("pi1: %lf\n",pi);
}

pi2(int n)
 {
   int i;
   double term1, term2, result, suma, pi;

   suma = 0.0;
   
   for(i=0; i<n; i++)
     {
      term1 = pow(-1,i);
      term2 = (2.0*i) + 1.0;
      result = term1 / term2;

      suma = suma + result;

      pi = suma * 4.0;

      
     }
   printf("pi2: %lf\n",pi);
 }



///////////////////////////////Programa principal////////////////////
int main(int argc, char **argv){

  int N;
  
  N  = atoi(argv[1]);

  pi1(N);
  
  pi2(N);
  
  return 0;
  
}
