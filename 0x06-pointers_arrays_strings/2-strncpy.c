#include "holberton.h"

/**
 * *_strncpy - dont copy that floppy
 *
 * Return: your copied floppy
 */

char *_strncpy(char *dest, char *src, int n)
{
  int i;

  for (i = 0; i < n && src[i] != '\0'; i++)
    dest[i] = src[i];
  for( ; i < n; i++)
    dest[i] = '\0';

  return dest;
}
