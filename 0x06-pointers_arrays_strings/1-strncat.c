#include "holberton.h"

/**
 * strncat - does stuff
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
  int c;
  int l;

  for (c = 0; dest[c] != '\0'; c++)
    {
    }

  for (l = 0; l < n && src[l] != '\0'; l++, c++)
    {
      dest[c] = src[l];
    }
    if (dest[c] != '\0')
    {
      c++;
      dest[c] = '\0';
    }

  return (dest);
}
