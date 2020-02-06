#include <stdio.h>

/**
 * main(void) - print single digits
 *
 * Description: print single digits starting at 0
 * and incrementing to 9
 *
 * Return: value is 0 which is positive
 */

int main(void)
{
  int n = 0;
  while (n < 10)
    {
      printf("%d", n);
      n++;
    }
  putchar('\n');
  return (0);
}
