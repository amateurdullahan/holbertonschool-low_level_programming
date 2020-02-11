#include "holberton.h"
#include <stdio.h>

/**
 * main - void
 *
 * Return: 0
 */

void print_to_98(int n)
{
  int g = 98;
  if (n > g)
    {
      while (n >= g)
	{
	  printf("%d", n);
	  if (n != g)
	    {
	      printf(", ");
	    }
	  n--;
	}
    }
  else if (n < g)
    {
      while (n <= g)
	{
	  printf("%d", n);
	  if (n != g)
	    {
	      printf(", ");
	    }
	  n++;
	}
    }
  else
    {
      printf("%d", n);
    }
  printf("\n");
}
