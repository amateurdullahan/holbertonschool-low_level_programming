#include <stdio.h>

/**
* main - void
* 
* Return: 0
*/

int main(void)
{
  long e = 2;
  long p = 3;
  long pp = 2;
  long ppp = 1;
  int c;

  printf("2, ");

  for( c = 0; c < 50; c++)
    {
      p = p + pp;
      pp = pp + ppp;
      ppp = pp - ppp;
      if((p % 2) == 0 && p <= 4000000)
	{
	  e = e + p;
	  printf("%ld, ", e);
	}
    }
  printf("\n");
  return (0);
}
