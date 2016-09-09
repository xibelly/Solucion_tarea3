int factorial(int n)
{
  int i;
  int p;

  p = 1;
  for(i=1; i<=n; i ++)
    {
      p = p*i;
    }
  
  return p;
}
