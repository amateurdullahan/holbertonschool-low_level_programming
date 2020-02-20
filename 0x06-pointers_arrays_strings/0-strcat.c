#include "holberton.h"

/**
 * strcat - does stuff
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
  int c;
  int l;

  for (c = 0; dest[c] != '\0'; c++)
    {
    }
  l = 0;
  while (src[l] != '\0')
    {
      dest[c] = src[l];
      l++;
      c++;
    }
  c++;
  dest[c] = '\0';

  return (dest);
}
