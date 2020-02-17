#include "holberton.h"

/**
 * main - c
 *
 * Return: notta thing my man
 */

void print_rev(char *s)
{
  int c;
  char b;

  for(c = s['\0']; s[c] >= 0; c--)
    {
      b = s[c];
      _putchar(b);
    }
  _putchar('\n');
} 
