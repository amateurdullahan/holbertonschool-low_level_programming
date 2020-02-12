#include <stdio.h>

/**
 * main - void
 *
 * Return: 0
 */

int main(void)
{
  int x = 0;
  int i;
  for (i = 0; i < 1024; i++)
    {
      if ((i % 5) == 0 || (i % 3) == 0)
	{
	  x = x + i;
	}
    }
  printf("%d\n", x);
  return (0);
}
