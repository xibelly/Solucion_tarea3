#include"factorial.h"

double factorial(double n)
{
  double i, p;

  p = 1.0;
  for(i=1.0; i<=n; i ++)
    {
      p = p*i;
    }
  
  return p;
}
