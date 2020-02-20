#include "holberton.h"

/**
 * reverse_array - reverse array
 *
 * Return: reversed array
 */

void reverse_array(int *a, int n)
{
  int c;
  int d;
  for (c = 0; a[c] < n; c++);

  for (d = 0; a[d] < n; d++)
    {
      a[d] = a[c];
      c--;
    }
}
