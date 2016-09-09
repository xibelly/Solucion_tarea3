/* Xibelly Eliseth Mosquera Escobar

 1) Escribir un programa que utilice la serie de taylor de la funcion seno(alrededor de x=0) para calcular el seno de un angulo. El programa debe recibir como entrada el valor del angulo (x) en grados y en el numero de terminos (N) de la serie a usarse en la expansion, y retornar en pantalla el valor de sen(x).

 */

#include<stdio.h>
#include<stdlib.h>

#define MAX 20 //max numero de digitos de salida 


//////////////////////Funciones////////////////////////

factorial(int n)
{
  int res[MAX],i;
  int x, res_size;
  
  res[0] = 1;
  res_size = 1;

  for(x=2; x<=n; x++)
    {
      res_size = multiply(x, res, res_size);
    }

  //for(i=res_size -1 ; i>=0; i--)
  //cout << res[i];

  
}

int multiply(int x, int res[], int res_size)
{
  int carry,i,prod;

  carry = 0;

  for(i=0; i<res_size; i++)
    {
      prod   = res[i] * x + carry;
      res[i] = prod % 10;
      carry  = prod/10;

    }
  while(carry)
    {
      res[res_size] = carry%10;
      carry         = carry/10;
      res_size++;
    }


  return res_size;
}


////////////////////////////Programa principal///////////////////
int main(int argc, char **argv){

  int N,i,term;
  double angulo,numerador,seno_x;
  
  angulo = atof(argv[2]);
  N      = atoi(argv[3]);
  
  for(i=0; i<N; i++)
    {
      numerador    = (-1)^(i) * (angulo)^(2*i+1);

      term         = (2*i) + 1;       
             
      //seno_x       = numerador / factorial(term); 

      seno_x        = seno_x + numerador / factorial(term); 
    }
  printf("seno x:%lf\n",seno_x);


}
