#include <stdio.h>
#include <math.h>
/**
 * main - define
 *
 * Return: 0
 */

int main(void)
{
  long long p = 612852475143;
  long pf;
  long c;

  while(c <= sqrt(p))
    {
      if (c % p == 0)
	{
	  pf = c;
	  printf("%ld", pf);
	}
      c++;
    }
  printf("\n");
  return (0);
}
