
#include <stdio.h>

int
main ()
{
  int nu[6],i,max;
  for (i = 0; i <= 5; i++)
    {
      printf ("enter value \n");
      scanf ("%d", &nu[i]);
    }
  
  max = nu[0];
  for (i = 0; i <= 5; i++)
    {
      if (max < nu[i])
      {
          max = nu[i];
      }
    }
    printf("maximum is:%d \n",max);
}

    
