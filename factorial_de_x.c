#include<stdio.h>
#include<stdlib.h>
#include"factorial.c"


int main(int argc, char **argv)
{
  double x;

  x = atof(argv[1]);

  factorial(x);

  printf("(%lf)! = %f\n",x, factorial(x));

  return 0;
}
