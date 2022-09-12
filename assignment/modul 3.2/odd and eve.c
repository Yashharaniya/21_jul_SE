
#include <stdio.h>

int main ()
{
  int i,j,k=0 ; 
  int a[10], b[10];
  for (i = 0; i < 10; i++)
    {
      printf ("enter the valu");
      scanf ("%d", &a[i]);
    }
  for (i = 0; i < 10; i++)
    {
      if (a[i])  %2 == 0)
	{
	  no1 += a[i];
	  printf ("%d is eve number", a[i]);
	}
      else
	{
	  no2 + a[i];
	  printf ("%d is odd number", a[i]);
	}
      printf ("sum of the odd number%d\n", no1);
      printf ("sum of the eve number%d\n", no1);
    }
