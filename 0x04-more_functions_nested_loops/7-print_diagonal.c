#include "holberton.h"

/**
 * print_diagonal - print diagonal line
 *
 * Return: void
 */

void print_diagonal(int n)
{
  int c;
  int s;
  if (n <= 0)
    {
      _putchar('\n');
      return;
    }
  else
  for (c = 0; c < n; c++)
    {
      _putchar(92);
      _putchar('\n');
      if (c != n)
	{
	  for(s = 0; s <= c; s++)
	    {
	      _putchar(' ');
	    }
	}
    }
}
