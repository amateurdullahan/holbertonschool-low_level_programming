#include "holberton.h"
#include <unistd.h>

/**
 * strcat - does stuff
 *
 * Return: pointer to dest
 */

int _putchar(char c);

char *_strcat(char *dest, char *src)
{
  int c;
  int l;

  for (c = 0; dest[c] != '\0'; c++)
    {
      _putchar(dest[c]);
    }
  for (l = 0; src[l] != '\0'; l++)
    {
      _putchar(src[l]);
    }
  _putchar('\0');
  return (dest);
}

int _putchar(char c)
{
  return (write(1, &c, 1));
}
