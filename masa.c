/* Xibelly Eliseth Mosquera Escobar

 9) Una partícula tiene una masa en reposo (cuando no esta en movimiento)  mo. Si la velocidad de
movimiento de la partícula es muy grande su masa esta dada por
 
m= m_{0} √ 1−v^2 /c^ 2 (*)

Cuando un objeto esta en reposo tiene una masa de 1k. Escriba un programa que calcule el valor de lamasa de dicho objeto para diferentes valores de la velocidad de la partícula. El programa debe recibir el
valor del incremento dv entre valores sucesivos de la velocidad y producir una archivo de columnas. La
primer columna debe contener el valor de la velocidad de la partícula v, la segunda el valor de v/c y la
tercera debe contener el valor de la masa de la partícula. 
El programa debe tener una función en la que se evalúa la masa de la partícula (eq. *). 
Grafique sus resultados usando gnuplot. 
 */

/*
  Analisis y diseño

 Para resolver el problema de calcular el valor de la masa de la particula para diferentes valores de la velocidad, necesitamos:

-recivir el valor del incremento de la velocidad -dv- y la condicion de parada -N-, esto se hara por linea de comandos

-definir en una funcion la ecuacion (*) y calcular de manera iterativa para cada valor de dv, esto se hara dentro de un loop, que llega hasta el valor N dado.

-definir las variables m_{0} y c, como variables globales

-imprimir en disco los datos: v, v/c y m

-graficar los resultados


 */



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


/////////////////////////////////variables globales/////////////////////
#define m0 1                 //masa en reposo (kg)
#define c 299792458        //velocidad de la luz (m/s)

FILE *out = NULL;


////////////////////////////////////////funciones///////////////////
masa(double incremento, int N)
{
  int i;
  double v, termino, termino2, result;
  

  out = fopen("salida_punto9.dat","w");

  for(i=0; i<N; i++)
    {
      v         = i * incremento;
	
      termino   = v/c;

      termino2  = termino * termino ;

      result    = m0/ sqrt(1 - (termino2) );

      fprintf(out,"%lf %lf %lf\n",v, termino, result);

    }
  fclose(out);

}



///////////////////////////////Programa principal////////////////////
int main(int argc, char **argv){

  double dv;    //300000
  int N;        //15
  
  dv = atof(argv[1]);

  N  = atoi(argv[2]);
  
  masa(dv,N);
  
  return 0;
  
}
