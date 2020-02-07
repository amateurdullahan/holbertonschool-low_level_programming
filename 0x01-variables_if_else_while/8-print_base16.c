#include <stdio.h>

/**
 * main - description
 *
 * Description: prints base16 single digit numbers
 * using putchar and the ascii table values
 *
 * Return: value is 0 is positive
 */
int main(void)
{
  int h = 48;
  int l = 97;
  while (h < 58)
    {
      putchar(h);
      h++;
    }
  while (l < 103)
    {
      putchar(l);
      l++;
    }
  putchar('\n');

  return (0);
}
