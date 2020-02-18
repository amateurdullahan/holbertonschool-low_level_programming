#include "holberton.h"

/**
 * main - c
 *
 * Return: notta thing my man
 */

void print_rev(char *s)
{
  int c;

  for(c = 0; s[c] != '\0'; c++)
    {

    }
  c--;
  while(s[c] != 0)
    {
      _putchar(s[c]);
      c--;
    }
_putchar('\n');
} 
