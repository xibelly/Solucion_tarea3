/* Xibelly Eliseth Mosquera Escobar

 6) Escriba   un   programa   que   evalúe   (en   una   rutina   diferente   al   main)   la   función
f(x)=sin(x)*ln(2*x+1)*sinh(x) en el intervalo [0, 10]. El programa debe recibir el tamaño del paso (dx)
entre evaluaciones sucesivas de la función.
El resultado se debe escribir en un archivo de  tres columnas. La primer columna conteniendo el valor i
del incremento en x (x=i*dx), la segunda columna debe contener x,  y la tercera conteniendo el valor de
f(x).
En otra rutina, escriba un procedimiento que lea la tabla producida en la parte anterior, y escriba otro
archivo de dos columnas, en este caso la primer columna debe tener el valor f(x) y la segunda columna
el valor x.
El resultado final del programa deben ser los dos archivos. Grafique los resultados usando gnuplot (o el
graficador de su preferencia) para verificar la calidad del resultado
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


/////////////////////////////////variables globales/////////////////////
#define n 10

FILE *in = NULL;
FILE *out = NULL;
FILE *out2 = NULL;

double *X, *Fx;

////////////////////////////////////////funciones///////////////////
fdex(double incremento)
{
  int i;
  double result, x, termino;
  

  out = fopen("salida.dat","w");

  for(i=0; i<n; i++)
    {
      x = i * incremento;
	
      termino = log10((2*x) + 1);

      result = sin(x) * sinh(x) * termino;

      fprintf(out,"%d %lf %lf\n",i, x, result);

    }
  fclose(out);

}

leayescriba()
{
  int i, ii;
  double result, x, dx;
    
  in = fopen("salida.dat","r");
  
  out2= fopen("salida2.dat","w");

  
  for(i=0; i<n; i++)
    {
      fscanf(in,"%d %lf %lf",&ii, &x, &result);
      
      X[i]   = x;

      Fx[i]  = result;
      
      fprintf(out2,"%lf %lf\n", X[i], Fx[i]);
    }

  
  fclose(in);
  fclose(out2);
}


///////////////////////////////Programa principal////////////////////
int main(int argc, char **argv){

  double dx;

  X = (double *) malloc(n *sizeof(double));

  Fx = (double *) malloc(n *sizeof(double));

  dx = atof(argv[1]);
  
  fdex(dx);
  
  leayescriba();

  return 0;
  
}
