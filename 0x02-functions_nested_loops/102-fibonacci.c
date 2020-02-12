#include <stdio.h>

/**
* main - void
* 
* Return: 0
*/

int main(void)
{
  long p = 3;
  long pp = 2;
  long ppp = 1;
  int c;

  printf("1, 2, 3, ");

  for( c = 0; c < 47; c++)
    {
      p = p + pp;
      pp = pp + ppp;
      ppp = pp - ppp;
      printf("%ld, ", p);
    }
  return (0);
}
