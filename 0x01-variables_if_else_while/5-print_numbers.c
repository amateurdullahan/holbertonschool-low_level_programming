#include <stdio.h>

/**
 * main - print single digits
 *
 * Description: print single digits starting at 0
 * and incrementing to 9
 *
 * Return: value is 0 which is positive
 */
int main(void) /* description: this is main */
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
