#include <stdio.h>
#include "holberton.h"

/**
 * print_array - nnnnn
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
  int c;
  

  for(c = 0; c < n; c++)
    {
      printf("%d", a[c]);
      if(c < (n - 1))
	{
	  printf(", ");
	}
    }
  printf("\n");
}
