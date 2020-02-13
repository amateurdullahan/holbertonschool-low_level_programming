#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 *
 * Return: void
 */

void print_diagonal(int n)
{
  int c = 0;
  int s;
  if (n <= 0)
    {
      _putchar('\n');
      return;
    }
  else
  while (c < n)
    {
      s = 0;
      _putchar(92);
      _putchar('\n');
      while (s < c)
	{
	  _putchar(' ');
	  s++;
	}
      c++;
    }
}
