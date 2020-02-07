#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print numbers in ascending order using putchar
 * and an incremented variable
 *
 * Return: value is 0 is positive
 */
int main(void)
{
  int n = 48;

  while (n < 58)
    {
      putchar(n);
      if (n < 57)
      {
	putchar(',');
	putchar(' ');
      }
      n++;
    }

  putchar('\n');

  return (0);
}
